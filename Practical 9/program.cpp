#include <iostream>
using namespace std;

class Employee
{
public:
    virtual void display()
    {
        cout << "\nEmployee Details";
    }
};

class Manager : public Employee
{
public:
    void display()
    {
        cout << "\nEmployee Type: Manager";
        cout << "\nSalary: Rs. 50000\n";
    }
};

class Developer : public Employee
{
public:
    void display()
    {
        cout << "\nEmployee Type: Developer";
        cout << "\nSalary: Rs. 40000\n";
    }
};

class Clerk : public Employee
{
public:
    void display()
    {
        cout << "\nEmployee Type: Clerk";
        cout << "\nSalary: Rs. 25000\n";
    }
};

int main()
{
    Employee *ptr;

    Manager m;
    Developer d;
    Clerk c;

    ptr = &m;
    ptr->display();

    ptr = &d;
    ptr->display();

    ptr = &c;
    ptr->display();

    return 0;
}
