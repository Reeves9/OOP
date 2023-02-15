// class functions outside class defination and ambiguity
#include <iostream>
using namespace std;

class Grand
{
    protected:
    int n;
    
    public:
    void getter();
    void display();
};

void Grand :: getter()
{
    cin >> n;
}

void Grand :: display()
{
    cout << "Given value is " << n << endl;
}

class Parent : public Grand 
{
    public:
    void display();
};

void Parent :: display()
{
    cout << "Square is " << n*n << endl; 
}

class Child : public Parent
{
    public:
    void display();
};

void Child::display()
{
    cout << "Cube is " << n*n*n << endl;
}

int main()
{
    Child child;
    child.Grand::getter();
    child.Grand::display();
    child.Parent::display();
    child.Child::display();
    return 0;
}

