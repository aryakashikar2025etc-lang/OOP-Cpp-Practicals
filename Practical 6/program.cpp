#include<iostream>
using namespace std;

class Complex
{
    int real, imag;

public:

    void getdata()
    {
        cout<<"Enter real and imaginary parts: ";
        cin>>real>>imag;
    }

    void display()
    {
        cout<<real<<" + "<<imag<<"i"<<endl;
    }

    Complex operator+(Complex c)
    {
        Complex temp;

        temp.real = real + c.real;
        temp.imag = imag + c.imag;

        return temp;
    }
};

int main()
{
    Complex c1, c2, c3;

    cout<<"Enter first complex number:"<<endl;
    c1.getdata();

    cout<<"Enter second complex number:"<<endl;
    c2.getdata();

    c3 = c1 + c2;

    cout<<"\nFirst complex number: ";
    c1.display();

    cout<<"Second complex number: ";
    c2.display();

    cout<<"Sum of complex numbers: ";
    c3.display();

    return 0;
}
