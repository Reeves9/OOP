// relational operator overloading
#include <iostream>
using namespace std;
class Relation
{
public:
    int x;
    Relation(int x)
    {
        this->x = x;
    }
    void operator>(Relation obj) // overloading ">" operator
    {
        if (x > obj.x)
        {
            cout << " obj1 is greater than obj2" << endl;
        }
        else
        {
            cout << " obj2 is greater than obj1" << endl;
        }
    }
};
int main()
{
    Relation obj(100);
    Relation obj1(20);
    obj > obj1; // calling the overloaded operator
}