#include <iostream>
using namespace std;

class String
{
    char str[100];

public:

    // Default Constructor
    String()
    {
        str[0] = '\0';
        cout << "Constructor called";
    }

    // Accept function
    void Accept()
    {
        cout << "\nEnter a string: ";
        cin.getline(str, 100);
    }

    // Display function
    void Display()
    {
        cout << "You entered: " << str;
    }

    // Destructor
    ~String()
    {
        cout << "\nDestructor called";
    }
};

int main()
{
    String s;

    s.Accept();
    s.Display();

    return 0;
}
