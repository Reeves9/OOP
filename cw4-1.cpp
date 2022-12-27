// inheritance
#include <iostream>

using namespace std;

class vehicle
{
    public:
    void engine()
    {
        cout << "Vroom!!" << endl;
    }

};

class toyota : public vehicle // toyota inherits functions from vehicle
{
    public:
    void start()
    {
        cout << "10 sec" << endl;
    }
};

class beneli : public toyota // beneli inherits functiond form toyota and inturn from vehicle
{
    public:
    void sound()
    {
        cout << "test sound"<< endl;
    }
};

int main()
{
    beneli car;
    car.start(); // start() was inherited from vehicle
    car.engine(); // engine() was inherited by toyota from toyota
    car.sound(); 
    return 0;
} 