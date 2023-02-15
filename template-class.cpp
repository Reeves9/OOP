// template class
#include <iostream>
using namespace std;

template <class T> // declaring template class
class Test
{
    T var1, var2; // template variables

public:
    Test(T var1, T var2) // template function
    {
        this->var1 = var1;
        this->var2 = var2;
    }

    void sum()
    {
        cout << "sum is " << var1 + var2 << endl;
    }
};

int main()
{
    Test<int> obj(2, 3); // calling of template class with int datatyoe
    obj.sum();
    Test<string> obj1("ran", "running"); // calling of template class with string datatype
    obj1.sum();
    return 0;
}