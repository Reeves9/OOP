// digits of an integer
#include <iostream>
using namespace std;

class Digits
{
    public:
    int digi_sum(int num)
    {
        int sum, rem;
        while(num != 0)
        {
            rem = num % 10;
            sum = sum + rem;
            num /= 10;
        }
        return sum;
    }
};

int main()
{
    Digits obj;
    int num , ans;
    cout << "Enter any number:" << endl;
    cin >> num;
    ans = obj.digi_sum(num);
    cout << "Sum of digits is: " << ans << endl;
    return 0;
}