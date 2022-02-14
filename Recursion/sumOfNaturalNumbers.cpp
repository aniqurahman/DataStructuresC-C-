#include <stdio.h>

int sum(int n) {

    if (n == 0)
        return 0;
    else
        return sum(n-1)+n;

}

int factorial(int n) {
    int fact = 1;
    if (n <= 0) {
        return 1;
    }
    else {
        return factorial(n-1)*n;
    }
}

int factorialI(int n) {
    int fact = 1;
    for (int i = 1; i<=n;i++) {
        fact = fact * i;
    }
    return fact;
}

int sumI(int n) {
    int sum = 0;
    for (int i = 1; i<=n; i++)
        sum = sum+i;
    return sum;
}

int pow(int m,int n) {
    // if (n==0)
    //     return 1;
    // else
    //     return pow(m,n-1)*m;

    if (n==0)
        return 1;
    else if(n%2 == 0)
        return pow(m*m,n/2);
    else if(n%2 == 1)
        return m*pow(m*m,(n-1)/2);
}

double e(int x, int n) {
    static double p = 1,f =1;
    double r;
    if (n==0)
        return 1;
    else {
        r = e(x,n-1);
        p = p*x;
        f = f*n;
        return r+p/f;
    }
}

double e2(int x, int n) {
    float s = 1;
    for (;n>0;n--)
        s = 1+x*s/n;
    return s;
}

double e3(int x, int n) {
    static float s = 1;
    if (n==0)
        return s;
    else
        s = 1+x*s/n;
    return e3(x,n-1);
}


int main() {
    int r = 10;
    // printf("Sum of first %d natural numbers by recursion: %d\n",r,sum(r));
    // printf("Sum of first %d natural numbers by iteration: %d\n",r,sumI(r));
    // printf("Factorial of  %d  by recursion: %d\n",r,factorial(r));
    // printf("Factorial of  %d  by Iteration: %d\n",r,factorialI(r));
    int m =4,n=15;
    // printf("%d Power %d is: %d\n",m,n,pow(m,n));
    printf("%d Power %d is: %lf\n",m,n,e(m,n));
    printf("%d Power %d is: %lf\n",m,n,e2(m,n));
    printf("%d Power %d is: %lf\n",m,n,e3(m,n));

    return 0;
}