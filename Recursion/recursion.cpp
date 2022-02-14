#include <iostream>
#include <stdio.h>

using namespace std;

int x = 0;

int func(int n)
{
    
    if (n > 0)
    {
        x++;
        // printf("%d\n",n);
        int sum =  func(n-1)+x;
        return sum;
        
    }
    return 0;
}

int main()
{
    int r;
    r = func(5);
    cout<<r<<endl;

    r = func(5);
    cout<<r<<endl;
    
    return 0;
}