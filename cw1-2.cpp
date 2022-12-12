// to findif number is odd or even
#include <iostream>
using namespace std;

int main()
{
    int num;
    cout<<"enter any number:"<<endl;
    cin>>num;
    string res = ((num%2)==0)?"even":"odd";
    cout<<res<<endl;
    return 0;
}