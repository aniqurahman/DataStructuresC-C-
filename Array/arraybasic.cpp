#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cstdint>
#include <cstring>

using namespace std;

int main() 
{

    // int size;
    // // cout<<"Enter Array Size: ";
    // // cin>>size;
    // printf("Enter Size of Array:");
    // scanf("%d",&size);
    // int array[size] = {1,3,4,4,3,5,5,3,3,2};
    

    // printf("Size of whole array: %lu\n",sizeof(array));
    // int len = sizeof(array)/sizeof(array[0]);
    // printf("Elements in an array: %d\n",(len));
    // printf("Array Elements: ");
    // for (int i = 0; i<len;i++)
    // {
    //     printf("%d,",array[i]);
    // }
    // printf("\n");

    // long A[5];
    // // int B[5]={1,2,4,5,6};
    // // int C[10]={3,2,4};
    // // int D[3]={};
    // // int E[]={3,2,3,4,3};
    // // int F[]={};
    // for (int i=0;i<5;i++) {
    //     printf("%u\n",&A[i]);
    // }

    // int A[5] = {1,3,5,7};
    int *p,*q;
    p = (int *)malloc(5*sizeof(int));
    p[0] = 2;
    p[1] = 4;
    p[2] = 6;
    p[3] = 8;

    // for (int i = 0; i< 5; i++) 
    //     printf("%d,",A[i]);
    // printf("\n");

    for (int i = 0; i< 5; i++) 
        printf("%d,",p[i]);
    printf("\n");

    q = (int *)malloc(6*sizeof(int));
    std::memcpy(&q, &p, 5);
    q[1] = 10;
    q[4] = 10;
    q[5] = 12;

    for (int i = 0; i< 6; i++) 
        printf("%d,",q[i]);
    printf("\n");

    // free(p);
    for (int i = 0; i< 7; i++) 
      printf("%d,",p[i]);
    printf("\n");

    p = q;
    // q = NULL;

    for (int i = 0; i< 10; i++) 
        printf("%d,",p[i]);
    printf("\n");

    for (int i = 0; i< 6; i++) 
        printf("%d,",q[i]);
    printf("\n");
    return 0;
}