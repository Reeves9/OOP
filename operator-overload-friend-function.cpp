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

    friend Distance operator+(Distance &, Distance &);

    void display()
    {
        cout << km << "." << m << " km" << endl;
    }
};

Distance operator+(Distance &d1, Distance &d2)
{
    Distance d;
    d.km = d1.km + d2.km;
    d.m = d1.m + d2.m;
    if (d.m > 1000)
    {
        d.km = d.km + (d.km / 1000);
        d.m = d.m % 1000;
    }
    return d;
}

int main()
{
    Distance obj1(10, 500), obj2(20, 5000), obj3;
    obj3 = obj1 + obj2;
    obj3.display();
    return 0;
}