// solve ambiguity problem
#include <iostream>
#include <math.h>
using namespace std;

class Polygon
{
protected:
    int x, y, z;
};

class Triangle : protected Polygon
{
public:
    void set_sides(int a, int b, int c)
    {
        x = a;
        y = b;
        z = c;
    }

    float area()
    {
        float s;
        s = (x + y + z) / 2;
        return (sqrt(s * (s - x) * (s - y) * (s - z)));
    }
};

class Square : protected Polygon
{
public:
    void set_sides(int a)
    {
        x = a;
    }

    float area()
    {
        return pow(x, 2);
    }
};

class Rectrangle : protected Polygon
{
public:
    void set_sides(int a, int b)
    {
        x = a;
        y = b;
    }

    float area()
    {
        return (x * y);
    }
};

float triangle(Triangle poly1)
{
    int a, b, c;
    cout << "Enter sides of triangle:" << endl;
    cin >> a, b, c;
    poly1.set_sides(a, b, c);
    return poly1.area();
}

float square(Square poly2)
{
    int a;
    cout << "Enter sides of square:" << endl;
    cin >> a;
    poly2.set_sides(a);
    return poly2.area();
}

float rectrangle(Rectrangle poly3)
{
    int a, b;
    cout << " Enter sides of rectrangle:" << endl;
    cin >> a >> b;
    poly3.set_sides(a, b);
    return poly3.area();
}

int main()
{
    Triangle poly1;
    Square poly2;
    Rectrangle poly3;

start:
    int choice;
    system("clear");
    cout << "1.Trinangle" << endl;
    cout << "2.Square" << endl;
    cout << "3.Rectrangle " << endl;
    cout << "4.Exit" << endl;
    cin >> choice;

    if (choice == 1)
    {
        float ans = triangle(poly1);
        cout << "area is: " << ans << endl;
        system("read");
        goto start;
    }
    else if (choice == 2)
    {
        float ans = square(poly2);
        cout << "area is: " << ans << endl;
        system("read");
        goto start;
    }
    else if (choice == 3)
    {
        float ans = rectrangle(poly3);
        cout << "area is: " << ans << endl;
        system("read");
        goto start;
    }
    else if (choice == 4)
    {
        cout << "Program Terminated" << endl;
        system("read");
        goto end;
    }
    else
    {
        cout << "invalid choice!" << endl;
        system("read");
        goto start;
    }
end:
    return 0;
}