// Template function
#include <iostream>
using namespace std;

template <typename T> // defining the template
T add(T num1, T num2)
{
    return num1 + num2;
}

int main()
{
    int num1, num2, ans;
    float num3, num4, ans1;
    cout << "Enter two numbers" << endl;
    cin >> num1 >> num2;
    ans = add<int>(num1, num2); // declaring the data type of the template function
    cout << "sum is " << ans << endl;
    cout << "Enter two numbers" << endl;
    cin >> num3 >> num4;
    ans1 = add<float>(num3, num4);
    cout << "sum is " << ans1 << endl;
    return 0;
}