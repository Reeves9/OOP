#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Employee
{
    public:
    string name,address,department;
    double salary,id;
};

int main()
{
    Employee record[4];
    ofstream file("record.txt");
    for (int i=0;i<4;i++)
    {
        cout << "for Employee " << i+1 << endl;
        cout << "enter name: " << endl;
        cin >> record[i].name;
        record[i].id = i+1;
        cout << "enter address: " << endl;
        cin >> record[i].address;
        cout << "enter department: " << endl;
        cin >> record[i].department;
        cout << "enter salary: " <<endl;
        cin >> record[i].salary;

        file << "id         :" <<record[i].id<<endl;
        file << "name       :" <<record[i].name<<endl;
        file << "department :" <<record[i].department<<endl;
        file << "address    :" <<record[i].address<<endl;
        file << "salary     :" <<record[i].salary<<endl;
        file << endl;
    }
    file.close();
    return 0;
}
