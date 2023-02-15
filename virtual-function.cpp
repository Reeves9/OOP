// virtual function (runtime polymophism)
#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void draw()
    {
        cout << "shape is drawn" << endl;
    }
};

class Triangle : public Shape
{
public:
    void draw()
    {
        cout << "triangle is drawn" << endl; // method overriding draw()
    }
};

class Rectangle : public Shape
{
public:
    void draw()
    {
        cout << "rectangle is drawn" << endl; // method overriding draw()
    }
};

int main()
{
    Shape *s = new Triangle();
    s->draw();
    Shape *r = new Rectangle();
    r->draw();
    Shape *t = new Shape();
    t->draw();
    return 0;
}