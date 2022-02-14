#include <iostream>
#include <stdio.h>

using namespace std;

template <class T>
class Arithmetic
{
    private:
        T a;
        T b;
    public:
        Arithmetic (T a,T b);
        T add();
        T sub();
};

template <class T>
Arithmetic<T>::Arithmetic(T a, T b)
{
    this->a = a;
    this->b = b;
}

template <class T>
T Arithmetic<T>::add()
{
    T sum = a+b;
    cout<<"add(): Sum: "<<sum<<endl;
    return sum;
};

template <class T>
T Arithmetic<T>::sub()
{
    T sub = a-b;
    cout<<"sub(): Diff: "<<sub<<endl;
    return sub;
};

int main() 
{
    

    Arithmetic <int> ar(10,5);
    ar.add();
    ar.sub();

    Arithmetic <float> fr(10.4,5.3);
    fr.add();
    fr.sub();
}