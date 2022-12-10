#include <iostream>
#include <math.h>

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
    std::cout << "enter perpendicular and base" << std::endl;
    std::cin >> per >>bse;
    poly1.set(per,bse);
    hyp = poly1.find_h();
    poly1.set(hyp);
    std::cout << "hypotenuse is " << hyp <<std::endl;
    res = poly1.area();
    std::cout << "area is " << res <<std::endl;
    res = poly1.perimeter();
    std::cout << "perimeter is " << res <<std::endl;
    return 0;
}