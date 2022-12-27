// greatest among three
#include <iostream>
using namespace std;

class Comp
{
    public:
    int great(int num1, int num2 , int num3)
    {
        int ans = (num1 > num2 && num1 > num3) ? num1 : (num2 > num1 && num2 > num3) ? num2 : num3 ;
        return ans;
    }
};

int main()
{
    Comp obj;
    int num1 , num2 , num3;
    cout << "Enter three numbers:" << endl;
    cin >> num1 >> num2 >> num3;
    int ans  = obj.great(num1,num2,num3);
    cout << "Greatest numbers is " << ans << endl;
    return 0;
}