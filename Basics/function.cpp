#include <iostream>
#include <stdio.h>

using namespace std;

// int swap(int &val1, int &val2) 
// {
//     int temp = val1;
//     val1 = val2;
//     val2 = temp;
    
// }

int * allocArray(ssize_t size) 
{
    int *addr = (int *) malloc(size*sizeof(int));
    for (int i = 0; i<size; i++)
    {
        addr[i] = i+1;
    }
    return addr;
}   

int main()
{
    // int a = 1, b = 3;
    // cout <<"A: "<<a<<" ,B: "<<b<<endl;
    // swap(a,b);
    // cout <<"As: "<<a<<" ,Bs: "<<b<<endl;
    ssize_t size = 50;
    int * ptr;
    ptr = allocArray(size);
    for (int i = 0; i < size; i++)
    {
        printf("%d,",ptr[i]);
    }
    cout<<endl;
    return 0;
}




/**
 * size function
   text    data     bss     dec     hex filename
   3764     680     280    4724    1274 function
 * 
 */