// wap to overload += operator (overload using distance class as d1+d2)
#include <iostream>
using namespace std;

class Distance
{
public:
    int meter, centimeter;

    Distance(int meter, int centimeter)
    {
        this->meter = meter;
        this->centimeter = centimeter;
    }

    Distance()
    {
    }

    Distance operator+(Distance d1)
    {
        Distance d;
        d.meter = meter + d1.meter;
        d.centimeter = centimeter + d1.centimeter;
        if (d.centimeter > 100)
        {
            d.meter = d.meter + (d.centimeter / 100);
            d.centimeter = d.centimeter % 100;
        }
        return d;
    }
};

int main()
{
    Distance obj1(4, 300), obj2(1, 50), obj;
    obj = obj1 + obj2;
    cout << obj.meter << "." << obj.centimeter << " meters" << endl;
    return 0;
}