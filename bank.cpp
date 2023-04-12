#include <iostream>
using namespace std;

class Account
{
private:
    string name, accType;
    float balance;
    int accNumber;

public:
    Account(string name, int accNumber, string accType, float balance)
    {
        this->name = name;
        this->accNumber = accNumber;
        this->accType = accType;
        this->balance = balance;
    }

    void deposite(float amount)
    {
        balance += amount;
    }

    void withdraw(float amount)
    {
        if (balance > amount)
        {
            balance -= amount;
        }
        else
        {
            cout << "not enough balance" << endl;
            system("read");
        }
    }

    void display()
    {
        cout << "Name:     " << name << endl;
        cout << "balance:  " << balance << endl;
        system("read");
    }
};

int main()
{
    string name, type;
    float amount;
    int choice;
    cout << "enter name: " << endl;
    cin >> name;
    cout << "enter account type : " << endl;
    cin >> type;
    Account acc(name, 23001, type, 0);
start:
    system("clear");
    cout << "1.deposite" << endl;
    cout << "2.withdraw" << endl;
    cout << "3.query" << endl;
    cout << "4.exit" << endl;
    cin >> choice;
    if (choice == 1)
    {
        cout << "enter amount" << endl;
        cin >> amount;
        acc.deposite(amount);
    }
    else if (choice == 2)
    {
        cout << "enter amount" << endl;
        cin >> amount;
        acc.withdraw(amount);
    }
    else if (choice == 3)
    {
        acc.display();
    }
    else if (choice == 4)
    {
        goto end;
    }
    else
    {
        cout << "invalid entry" << endl;
        goto start;
    }
    goto start;
end:
    return 0;
}