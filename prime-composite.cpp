// if number is prime or composite
#include <iostream>
using namespace std;

int main()
{
    int num , fact , i ;
    cout << "enter any number:" << endl;
    cin >> num;
    fact = 0;
    for (i=1 ; i <= num ; i++)
    {
        if (num % i == 0)
        {
            fact++;
        }
    }
    string res = (fact > 2)?"composite":"prime";
    cout << res;
    return 0;
}