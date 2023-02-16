#include <iostream>
using namespace std;

class Person
{
private:
    string name, address;
    int age;

public:
    Person(string name, int age, string address)
    {
        this->name = name;
        this->age = age;
        this->address = address;
    }

    string get_name()
    {
        return name;
    }

    string get_address()
    {
        return address;
    }

    int get_age()
    {
        return age;
    }
};

int main()
{
    Person p("Reeshav", 19, "Dhulikhel");
    string name = p.get_name();
    int age = p.get_age();
    string address = p.get_address();
    cout << name << " " << age << " " << address << endl;
    return 0;
}