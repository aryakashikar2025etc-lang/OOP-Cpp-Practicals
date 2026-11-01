#include<iostream>
using namespace std;

int add(int a, int b)
{
    return a+b;
}

float add(float a, float b)
{
    return a+b;
}

int main()
{
    int x, y;
    float p, q;

    cout<<"Enter two integers: ";
    cin>>x>>y;

    cout<<"Sum of integers = "<<add(x,y);

    cout<<"\nEnter two floating point numbers: ";
    cin>>p>>q;

    cout<<"Sum of floating point numbers = "<<add(p,q);

    return 0;
}
