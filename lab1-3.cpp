// greatest among 10 numbers
#include <iostream>
using namespace std;

class Comp
{
    public:

    int great()
    {
        int arr[10];
        cout << "Enter 10 numbers: " << endl;
        for (int i = 0; i < 10; i++)
        {
            cin >> arr[i];
        }
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
        return arr[9];
    }
};

int main()
{
    Comp obj;
    int ans = obj.great();
    cout << "Largest number is: " << ans <<endl;
    return 0;
}