// use pure virtual functions to find area of triangle and rectangle
#include <iostream>
using namespace std;

class Shape
{
public:
    float base, height, lenght, breadth;
    virtual void area() = 0;
    void get_tri()
    {
        cout << "enter triangle's dimensions:" << endl;
        cin >> base >> height;
    }
    void get_rec()
    {
        cout << "enter rectangle's dimensions:" << endl;
        cin >> lenght >> breadth;
    }
};

class Triangle : public Shape
{
public:
    void area()
    {
        cout << "area of triangle: " << base * height * 0.5 << endl;
    }
};

class Rectangle : public Shape
{
public:
    void area()
    {
        cout << "area of rectangle: " << lenght * breadth << endl;
    }
};

int main()
{
    Shape *tri = new Triangle();
    Shape *rec = new Rectangle();
    tri->get_tri();
    tri->area();
    rec->get_rec();
    rec->area();
    return 0;
}