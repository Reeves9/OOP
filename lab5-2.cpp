// overload comparitive operators

#include <iostream>
using namespace std;

class Over
{
public:
    int num;

    void operator!=(Over obj1)
    {
        if (obj1.num != num)
        {
            cout << "not equal" << endl;
        }
        else
        {
            cout << "equal" << endl;
        }
    }
};
