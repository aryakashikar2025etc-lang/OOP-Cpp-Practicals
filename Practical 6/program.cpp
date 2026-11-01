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
        cout << real << " + " << imag << "i" << endl;
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

    cout << "Enter first complex number:\n";
    c1.accept();

    cout << "Enter second complex number:\n";
    c2.accept();

    c3 = c1 + c2;

    cout << "\nFirst complex number: ";
    c1.display();

    cout << "Second complex number: ";
    c2.display();

    cout << "Sum of complex numbers: ";
    c3.display();

    return 0;
}
