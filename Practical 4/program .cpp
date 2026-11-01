#include <iostream>
using namespace std;

class Complex
{
    int real, imag;

public:
    void accept()
    {
        cout << "Enter real and imaginary parts: ";
        cin >> real >> imag;
    }

    void display()
    {
        cout << real << " + " << imag << "i";
    }

    void add(Complex c1, Complex c2)
    {
        real = c1.real + c2.real;
        imag = c1.imag + c2.imag;
    }
};

int main()
{
    Complex c1, c2, c3;

    cout << "Enter first complex number:\n";
    c1.accept();

    cout << "Enter second complex number:\n";
    c2.accept();

    c3.add(c1, c2);

    cout << "\nFirst complex number: ";
    c1.display();

    cout << "\nSecond complex number: ";
    c2.display();

    cout << "\nSum of complex numbers: ";
    c3.display();

    return 0;
}
