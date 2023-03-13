// wap to overload += operator (overload using distance class as d1+d2) (km and m)
#include <iostream>
using namespace std;

class Distance
{
public:
    int km, m;

    Distance(int km, int m)
    {
        this->km = km;
        this->m = m;
    }

    Distance()
    {
    }

    Distance operator+(Distance d1)
    {
        Distance d;
        d.km = km + d1.km;
        d.m = m + d1.m;
        if (d.m > 1000)
        {
            d.km = d.km + (d.m / 1000);
            d.m = d.m % 1000;
        }
        return d;
    }

    void display(Distance obj)
    {
        cout << obj.km << "." << obj.m << " kilometers" << endl;
    }
};

int main()
{
    Distance d1(2, 5000), d2(5, 400), d;
    d = d1 + d2;
    d.display(d);
    return 0;
}
