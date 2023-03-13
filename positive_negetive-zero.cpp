// to find if number is +ve -ve or zero
#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "enter any number:"<<endl;
    cin >> num;
    string res = (num > 0)?"positive":(num<0)?"negetive":"zero";
    cout <<res<<endl;
    return 0;
}