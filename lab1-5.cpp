// prime numbers between 1 and n
#include <iostream>
using namespace std;

class Prime
{
    public:
    bool check(int n)
    {
        int count=0;
        for(int i=1 ; i<=n ; i++)
        {
            if ( n % i == 0)
            {
                count++;
            }
        }
        if (count <= 2)
        {
            return true;
        }
        else 
        {
            return false;
        }
    }
};

int main()
{
    Prime obj;
    int n;
    cout << "Enter any Number: "<< endl;
    cin >> n;
    for (int i=1 ; i<=n ; i++)
    {
        bool res = obj.check(i);
        if(res == true)
        {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}