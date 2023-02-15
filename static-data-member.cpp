// static member data
#include <iostream>
using namespace std;

class Test
{
private:
    static int num1, num2;

public:
    static void set_num(int a, int b)
    {
        num1 = a;
        num2 = b;
    }
    static void sum()
    {
        int ans = num1 + num2;
        cout << "sum is " << ans << endl;
    }
};

int main()
{
    try
    {
        static int num1, num2;
        cout << "Enter 2 numbers" << endl;
        cin >> num1 >> num2;
        Test::set_num(num1, num2);
        Test::sum();
    }
    catch (...)
    {
        cout << "error" << endl;
    }
    cout << "rest of code" << endl;
    return 0;
}
