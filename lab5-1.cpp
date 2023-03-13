//create a class account with member accno balance and min balance(static)
#include <iostream>
using namespace std;

class Account
{
public:
    int accno;
    float balance;
    static float min_balance;

    void set(int accno , float balance)
    {
        this->accno = accno;
        this->balance = balance;
    }

    void display()
    {
        cout << "Account number : " << accno << endl;
        cout << "Balance : " << balance << endl;
    }
};
float Account::min_balance = 1000;

int main()
{
    int accno;
    float balance;

    Account obj[5];
    for(int i = 0 ; i < 5 ; i++)
    {
        cout << "Enter account number and balance:" << endl;
        cin >> accno >> balance;
        obj[i].set(accno,balance);
    }
    for(int i = 0 ; i < 5 ; i++)
    {
        obj[i].display();
        cout << "Minimum balance is: " <<Account::min_balance << endl;
    }
    return 0;
}
