// WAP to create a class student with member sid sname and level and display data of two objects
#include <iostream>
using namespace std;

class Student
{
public:
    string sname, level;
    int sid;

    Student(int sid, string sname, string level)
    {
        this->sid = sid;
        this->sname = sname;
        this->level = level;
    }

    void display()
    {
        cout << "id   : " << sid << endl;
        cout << "name : " << sname << endl;
        cout << "level: " << level << endl;
    }
};

int main()
{
    string name, level;
    int id;
    for (int i = 0; i < 2; i++)
    {
        cout << "enter id" << endl;
        cin >> id;
        cout << "enter name" << endl;
        cin >> name;
        cout << "enter level" << endl;
        cin >> level;
        Student s1(id, name, level);
        s1.display();
    }
    return 0;
}