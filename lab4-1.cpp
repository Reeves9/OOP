// wap to find area of square and rectrangle using overloading
#include <iostream>
using namespace std;

int area(int len)
{
    return len * len;
}

int area(int len, int bth)
{
    return len * bth;
}

int main()
{
    int len, bth;
    cout << "Enter lenght of square: " << endl;
    cin >> len;
    cout << "Area of square is : " << area(len) << endl;
    cout << "Enter lenght and breadth of rectrangle: " << endl;
    cin >> len >> bth;
    cout << "Area of rectrangle is: " << area(len, bth) << endl;
    return 0;
}
