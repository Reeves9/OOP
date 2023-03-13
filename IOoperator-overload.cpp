#include <iostream>
using namespace std;

class Person
{
public:
    string name;
    int age;

    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }

    Person()
    {
    }

    friend ostream &operator<<(ostream &os, Person &p);
    friend istream &operator>>(istream &is, Person &q);
};

ostream &operator<<(ostream &os, Person &p)
{
    os << p.name << endl;
    os << p.age << endl;
    return os;
}

istream &operator>>(istream &is, Person &q)
{
    is >> q.name;
    is >> q.age;
    return is;
}

int main()
{
    Person p("reeves", 20);
    cout << p << endl;
    Person P;
    cin >> P;
    cout << P;
    system("clear");
    return 0;
}
