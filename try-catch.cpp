// exeption handling
#include <iostream>
using namespace std;

double divide(int q, int d)
{
    if (d == 0)
    {
        throw "divide by zero error";
    }
    return (q / d);
}

int main()
{
    int num1, num2;
    double ans;
    cout << "enter quotient and dividor" << endl;
    cin >> num1 >> num2;
    try
    {
        ans = divide(num1, num2);
        cout << "div is " << ans << endl;
    }
    catch (char const *msg)
    {
        cout << msg << endl;
    }

    return 0;
}