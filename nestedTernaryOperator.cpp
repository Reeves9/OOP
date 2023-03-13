#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout << "enter 3 numbers:"<<endl;
    cin >> a>>b>>c;
    int great = (a > b && a > c) ? a : (b > a && b > c) ? b : c;
    cout << "grestest no is : " <<great<<endl;
    return 0;
}