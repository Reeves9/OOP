// greatest number class
#include <iostream>
using namespace std;

class Greatest
{
    private:
    int num1,num2,num3;

    public:
    void set(int a ,int b, int c)
    {
        num1 = a;
        num2 = b;
        num3 = c;
    }

    int greatest()
    {
        return (num1 > num2 && num1 > num3) ? num1 : (num2 > num1 && num2 > num3) ? num2 : num3;
    }
};

int main()
{
    Greatest object;
    int num1,num2,num3;
    cout << "enter three numbers: " << endl;
    cin >> num1 >> num2 >> num3 ;
    object.set(num1,num2,num3);
    int ans = object.greatest();
    cout << "Greatest is: " << ans << endl;
    return 0;
}