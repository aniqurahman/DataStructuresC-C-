#include <stdio.h>
#include <chrono>
#include <iostream>

using namespace std;

auto start = chrono::steady_clock::now();

int facts[10];

// int fact(int n) {
//     if (n == 0)
//         return 1;
//     else 
//         if (facts[n] == -1) {
//             facts[n] = fact(n-1)*n;
//         }
//         return facts[n];
}

int fact(int n) {
    int fact = 1;
    for (int i = 1; i<=n;i++) {
        fact = fact * i;
    }
    return fact;
}

int nCr(int n,int r) {
    int num,den;
    num = fact(n);
    den = fact(r)*fact(n-r);
    return num/den;
}

int nCrR(int n,int r) {
    if (n==r || r==0) {
        return 1;
    }
    else 
        return nCr(n-1,r-1)+nCr(n-1,r);
}

int main(){
    for (int _it = 0; _it<10; _it++){
        facts[_it] = -1;
    }
    int n = 3,r=1;
    printf("%d NCR %d: %d\n",n,r,nCr( n, r));
    cout << "\n";
    auto end = chrono::steady_clock::now();
    auto diff = end - start;
    cout << chrono::duration<double, milli>(diff).count() << " ms" << endl;
    return 0;
}