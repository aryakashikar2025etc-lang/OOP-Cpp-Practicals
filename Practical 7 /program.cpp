#include <iostream>
using namespace std;

class String
{
    char* str;

public:

    // Constructor
    String()
    {
        str = new char[100];
        str[0] = '\0';
        cout << "Constructor called";
    }

    // Accept a string
    void accept()
    {
        cout << "\nEnter a string: ";
        cin.getline(str, 100);
    }

    // Display the string
    void display()
    {
        cout << "You entered: " << str;
    }

    // Destructor
    ~String()
    {
        delete[] str;
        cout << "\nDestructor called";
    }
};

int main()
{
    String s;

    s.accept();
    s.display();

    return 0;
}
