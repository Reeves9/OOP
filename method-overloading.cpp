// method overloading (compiletime polymorphism)
#include <iostream>
using namespace std;

class Demo
{

public:
    Demo()
    {
        cout << " contructor " << endl;
    }

    ~Demo()
    {
        cout << " decontructor " << endl;
    }
    void sum(int num1, int num2)
    {
        cout << "sum is: " << num1 + num2 << endl;
    }

    void sum(int num1, int num2, int num3)
    {
        cout << "sum is: " << num1 + num2 + num3 << endl;
    }
};

int main()
{
    int a = 10;
    int b = 20;
    int c = 30;
    Demo adder;
    adder.sum(a, b);
    adder.sum(a, b, c);
    return 0;
}