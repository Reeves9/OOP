// operator overlaoding
#include <iostream>
using namespace std;
class Test
{
public:
    int x, sum, diff;
    Test(int x)
    {
        this->x = x;
    }

    Test()
    {
    }
    void operator+(Test a) // overlaoding "+" operator using the "operator" keyword
    {
        sum = x + a.x;
        cout << sum << endl;
    }

    Test operator-(Test a) // overloading "-" operator using the "operator" keyword
    {
        Test obj;
        obj.diff = x - a.x;
        return obj;
    }

    void displayDiff()
    {
        cout << "sum is" << diff << endl;
    }
};
int main()
{
    Test obj(10);
    Test obj1(20);
    obj + obj1;             // calling the overloaded operator
    Test obj3 = obj - obj1; // calling the overloaded operator
    obj3.displayDiff();
    return 0;
}