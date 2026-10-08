#include <iostream>
using namespace std;

class Complex
{
    float real, imag;

public:

    // Function to accept complex number
    void getData()
    {
        cout << "Enter real part: ";
        cin >> real;

        cout << "Enter imaginary part: ";
        cin >> imag;
    }

    // Function to display complex number
    void display()
    {
        cout << real;

        if (imag >= 0)
            cout << " + " << imag << "i";
        else
            cout << " - " << -imag << "i";

        cout << endl;
    }

    // Addition
    Complex add(Complex c)
    {
        Complex temp;

        temp.real = real + c.real;
        temp.imag = imag + c.imag;

        return temp;
    }

    // Subtraction
    Complex subtract(Complex c)
    {
        Complex temp;

        temp.real = real - c.real;
        temp.imag = imag - c.imag;

        return temp;
    }

    // Multiplication
    Complex multiply(Complex c)
    {
        Complex temp;

        temp.real = (real * c.real) - (imag * c.imag);
        temp.imag = (real * c.imag) + (imag * c.real);

        return temp;
    }
};

int main()
{
    Complex c1, c2, result;
    int choice;

    cout << "Enter first complex number:\n";
    c1.getData();

    cout << "\nEnter second complex number:\n";
    c2.getData();

    do
    {
        cout << "\n========== COMPLEX NUMBER CALCULATOR ==========\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            result = c1.add(c2);
            cout << "\nAddition = ";
            result.display();
            break;

        case 2:
            result = c1.subtract(c2);
            cout << "\nSubtraction = ";
            result.display();
            break;

        case 3:
            result = c1.multiply(c2);
            cout << "\nMultiplication = ";
            result.display();
            break;

        case 4:
            cout << "\nExiting program...";
            break;

        default:
            cout << "\nInvalid choice!";
        }

    } while (choice != 4);

    return 0;
}
