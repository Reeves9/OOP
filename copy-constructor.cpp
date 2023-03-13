#include <iostream>
using namespace std;

class Test
{
public:
    int x, y;
    Test(int x, int y)
    {
        this->x = x;
        this->y = y;
    }

    Test(const Test &obj)
    {
        x = obj.x;
        y = obj.y;
    }
    void display()
    {
        cout << x << endl;
        cout << y << endl;
    }
};

int main()
{
    Test obj(10, 20);
    Test obj1(obj);
    obj1.display();
}