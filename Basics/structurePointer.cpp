#include <iostream>
#include <stdio.h>

using namespace std;

struct Rectangle 
{
    int length;
    int breadth;
};

void intitializeRectange(struct Rectangle *_r, int len, int breadth)
{
    _r->length = len;
    _r->breadth = breadth;
};


void printStruct(struct Rectangle *_r)
{
    printf("printStruct(): Len: %d, Breadth: %d\n",_r->length,_r->breadth);
}

int calculateArea (struct Rectangle _r)
{
    int area = _r.length * _r.breadth;
    printf ("calculateArea(): Area: %d\n",area);
    return area;
};

class RectangleClass 
{
    private:
        int length;
        int breadth;
    public:
        RectangleClass();
        RectangleClass(int newLen, int newBreadth);
        int area();
        int getLength();
        void setLength(int _len);
        ~RectangleClass();
};



RectangleClass::RectangleClass()
{
    length = breadth = 1;
}

RectangleClass::RectangleClass(int newLen, int newBreadth)
{
    length = newLen;
    breadth = newBreadth;
    printf("RectangleClass(): Modified Len: %d: , Modified Breadth %d\n", length,breadth);
}

int RectangleClass::area()
{
    int area =  length*breadth;
    printf("area(): Area: %d\n", area);
    return area;
}
int RectangleClass::getLength()
{
    return length;
}
void RectangleClass::setLength(int _len)
{
    length = _len;
    printf("setLength(): Length Updated: %d\n",length);
}

RectangleClass::~RectangleClass()
{
    printf("Destructor...");
}

int main() 
{
    RectangleClass  rect(5,5);
    rect.area();
    rect.setLength(10);
    rect.area();
}