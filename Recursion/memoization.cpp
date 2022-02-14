#include <stdio.h>

// 0 1 2 3 5 8 13 ...
// f(0) = 0
// f(1) = 1
// f(n) = (n-1) + f(n-2)

int F[10];

int fib(int n) {
    if (n<=1)
        return n;
    else   
        return fib(n-1) + fib(n-2);
}

int fibi(int n) {
    if (n<=1)
        return n;
    int t0 = 0, t1 = 1, sum = 0, i;
    for (i = 2; i <=n; i++) {
        sum = t0 + t1;
        t0 = t1;
        t1 = sum;
    }
    return sum;
}

int fibm(int n) {
    if (n<=1) {
        F[n] = n;
        return n;
    }
    else {
        if (F[n-2] == -1)
            F[n-2] = fibm(n-2);
        if (F[n-1] == -1)
            F[n-1] = fibm(n-1);
        return F[n-1] + F[n-2];
        // return F[n];
    }
}

int main() {
    int r = 6;

    printf("Fibonacci Series till index by recursion %d: ", r);
    for (int i=0; i<r; i++) {
        printf("%d,",fib(i));
    }
    printf("\n");


    printf("Fibonacci Series till index by iteration %d: ", r);
    for (int i=0; i<r; i++) {
        printf("%d,",fibi(i));
    }
    printf("\n");

    for (int _it = 0; _it<10; _it++){
        F[_it] = -1;
    }
    printf("Fibonacci Series till index by momoization %d: ", r);
    for (int i=0; i<r; i++) {
        printf("%d,",fibm(i));
    }
    printf("\n");


    return 0;
}