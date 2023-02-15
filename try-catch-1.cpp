// exception
#include <iostream>
using namespace std;

int get()
{
    int a;
    cout << "enter any number" << endl;
    try
    {
        cin >> a;
    }
    catch (...)
    {
        cout << "you have to enter a NUMBER!" << endl;
        get();
    }
    return a;
}

int main()
{
    int a;
    cout << get();
    return 0;
}