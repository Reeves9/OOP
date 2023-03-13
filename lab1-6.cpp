// smallest and largest among list of integers
#include <iostream>
using namespace std;

class Comp
{
    public:
    int arr[10];

    void set()
    {
        cout << "Enter 10 numbers: " << endl;
        for (int i = 0; i < 10; i++)
        {
            cin >> arr[i];
        }
    }

    void sort()
    {
        int temp;
        for (int i = 0 ; i < 9; i++)
        {
            for (int j = i+1 ; j < 10 ; j++)
            {
                if (arr[i] > arr [j])
                {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
                
            }
        }
    }

    int great()
    {
        sort();
        return arr[9];
    }

    int small()
    {
        sort();
        return arr[0];
    }
};

int main()
{
    Comp obj;
    obj.set();
    int large = obj.great();
    cout << "Largest number is: " << large <<endl;
    int small = obj.small();
    cout << "Smallest number is: " << small <<endl;
    return 0;
}