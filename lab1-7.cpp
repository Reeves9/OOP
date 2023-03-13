// sort in accending order
#include <iostream>
using namespace std;

class Num
{
    private:
    int arr[10];

    public:
    void getter()
    {
        cout << "Enter 10 Numbers:" << endl;
        for (int i=0 ; i<10 ; i++)
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

    void display()
    {
        cout << "Sorted Numbers are:" << endl;
        for (int i=0 ; i<10 ; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Num sorter;
    sorter.getter();
    sorter.sort();
    sorter.display();
    return 0;
}