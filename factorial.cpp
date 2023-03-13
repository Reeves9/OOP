// find factorial of number
#include <iostream>
using namespace std;

int main()
{
    int num , ans = 1;
    cout << "enter any number" << endl;
    cin >> num;
    for (int i = 1 ; i <= num ; i++)
    {
        ans *= i; 
    }
    cout << "Factorial is: " << ans << endl;
    return 0;
}