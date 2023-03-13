// overloading unary operator
#include <iostream>
using namespace std;

class Demo
{

public:
    int x;
    Demo(int x)
    {
        this->x = x;
    }

    void operator++(int) // overloading "++" operator
    {
        x++;
    }

    void display()
    {
        cout << x << endl;
    }
};

int main()
{
    Demo obj(10);
    obj++; // calling the overloaded operator
    obj.display();
}