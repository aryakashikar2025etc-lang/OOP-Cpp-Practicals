#include <iostream>
using namespace std;

class Addition
{
public:
    int add(int a, int b)
    {
        return a + b;
    }

    float add(float a, float b)
    {
        return a + b;
    }
};

int main()
{
    Addition obj;

    int x, y;
    float p, q;

    cout << "Enter two integers: ";
    cin >> x >> y;

    cout << "Sum of integers = " << obj.add(x, y);

    cout << "\nEnter two floating-point numbers: ";
    cin >> p >> q;

    cout << "Sum of floating-point numbers = " << obj.add(p, q);

    return 0;
}
