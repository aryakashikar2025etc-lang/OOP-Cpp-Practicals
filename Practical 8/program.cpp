
   #include <iostream>
using namespace std;

class BasicInfo
{
protected:
    int emp_id, age;
    char name[50];

public:
    void getBasicInfo()
    {
        cout << "Enter Employee ID: ";
        cin >> emp_id;

        cout << "Enter Employee Name: ";
        cin.ignore();
        cin.getline(name, 50);

        cout << "Enter Age: ";
        cin >> age;
    }
};

class DepartmentInfo
{
protected:
    char department[50];
    char designation[50];

public:
    void getDepartmentInfo()
    {
        cout << "Enter Department: ";
        cin.ignore();
        cin.getline(department, 50);

        cout << "Enter Designation: ";
        cin.getline(designation, 50);
    }
};

class Employee : public BasicInfo, public DepartmentInfo
{
public:
    void accept()
    {
        getBasicInfo();
        getDepartmentInfo();
    }

    void display()
    {
        cout << "\n----- Employee Details -----";
        cout << "\nEmployee ID: " << emp_id;
        cout << "\nName: " << name;
        cout << "\nAge: " << age;
        cout << "\nDepartment: " << department;
        cout << "\nDesignation: " << designation;
    }
};

int main()
{
    Employee e;

    e.accept();
    e.display();

    return 0;
}
