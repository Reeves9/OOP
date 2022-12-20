#include <iostream>
#include <math.h>
using namespace std;

class RTriangle
{
    private:
    
    float p , b , h;

    public:

    void set(float a , float d )
    {
        p = a;
        b = d;
    }

    void set(float hp)
    {
        h = hp;
    }

    float area()
    {
        return (p*b*0.5);
    }

    float perimeter()
    {
        return (p+b+h);
    }

    float find_h()
    {
        return (sqrt((p*p)+(b*b)));
    }
};

int main()
{
    float per , bse , hyp , res;
    RTriangle poly1;
    cout << "enter perpendicular and base" << endl;
    cin >> per >>bse;
    poly1.set(per,bse);
    hyp = poly1.find_h();
    poly1.set(hyp);
    cout << "hypotenuse is " << hyp << endl;
    res = poly1.area();
    cout << "area is " << res << endl;
    res = poly1.perimeter();
    cout << "perimeter is " << res << endl;
    return 0;
}