#include<iostream>
using namespace std;

int main()
{
    int x = 9;
    // first regular if
    if((x % 2) == 0)
    {
        cout<<"even"<<endl;
    }
    else
    {
        cout <<"odd"<<endl;
    }
    // using ternary if
    string ans = ((x % 2) == 0) ? "even" : "odd";
    cout << ans <<endl;
    return 0;
}