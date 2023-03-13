// this pointer
#include <iostream>
using namespace std;

class Test
{
private:
    int num1, num2;

public:
    void set_num(int num1, int num2)
    {
        this->num1 = num1; // this refers to an object of the class where "this" is used so "this->num1" is num1 of class and "=num1" is num1 of parameter
        this->num2 = num2;
    }
    void sum()
    {
        int ans = num1 + num2;
        cout << "sum is " << ans << endl;
    }
};

int main()
{
    Test obj;
    int num1, num2;
    cout << "Enter 2 numbers" << endl;
    cin >> num1 >> num2;
    obj.set_num(num1, num2);
    obj.sum();
    return 0;
}
