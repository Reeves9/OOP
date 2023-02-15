// pure virtual functiom
#include <iostream>
using namespace std;

class Test
{
public:
    virtual void sum() = 0; // pure virtual function
    void diff()             // normal function
    {
        cout << "diff" << endl;
    }
};

class Teste : public Test
{
    void sum() // override function of parent class which is necessary for the above pure virtual function
    {
        cout << "sum" << endl;
    }
};

int main()
{
    Test *obj = new Teste; // a way of defining objects where "*obj" ,has the object address / is the object, with reference to the parent class and "new Teste" declare the the new object of Teste class
    obj->sum();
    obj->diff();
    return 0;
}