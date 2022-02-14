#include <iostream>
#include <stdio.h>

using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};


int main()
{
    // int a = 10;
    // int *p; //Declration of pointer
    // p = &a; //Initialization of pointer
    // printf("Value of Int: %d\n",a);
    // printf("Address of Int: %d\n",&a);
    // printf("Value of Address Pointer: %d\n",p);
    // printf("Dereferencing using Pointer Variable: %d\n",*p);

    
    // int *p = (int *) malloc(5*sizeof(int)); // C
    // // int *p = new int[5]; //C++
    // p[0]=0;p[1]=2;p[2]=3;p[3]=4;p[4]=5;

    // for (int i = 0; i < 5; i++) 
    // cout<<p[i]<<endl;
    
    // // delete [] p; //Dynamic memory release in C++
    // free(p);

    // int *p1;
    // char *p2;
    // float *p3;
    // double *p4; 
    // struct Rectangle *p5;

    // cout<<sizeof(p1)<<endl;
    // cout<<sizeof(p2)<<endl;
    // cout<<sizeof(p3)<<endl;
    // cout<<sizeof(p4)<<endl;
    // cout<<sizeof(p5)<<endl;

    // int a = 10;
    // int &ref = a;

    // cout<<a<<endl;
    // cout<<ref<<endl;
    // cout<<&a<<endl;
    // cout<<&ref<<endl;



    // struct Rectangle r = {10,5};
    // struct Rectangle *p = &r;

    // p->length = 20;
    
    // cout<<r.length<<endl;

    struct Rectangle *p = (struct Rectangle *)malloc(sizeof(struct Rectangle));
    p->length = 10;
    p->breadth = 10;

    printf("Length: %d\n",p->length);
    printf("Breadth: %d\n",p->breadth);
    return 0;
}