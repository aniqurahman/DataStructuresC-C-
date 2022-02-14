#include <iostream>
#include <stdio.h>



struct Rectangle
{
    char a; //1
    int age; //4
    char b; //1
    
};

int main() 
{
    printf("Size of Char:\t %lu \n", sizeof(char));
    printf("Size of Int:\t %lu \n", sizeof(int));
    printf("Size of Rectange Strcture: %lu\n", sizeof(Rectangle));

}