// borad question trial
#include <iostream>
using namespace std;

class Author
{
private:
    string name, qualification;

public:
    void get_data()
    {
        cout << "Enter name and qualification of author: ";
        cin >> name >> qualification;
        cout << endl;
    }

    void put_data()
    {
        cout << "Author name        : " << name << endl;
        cout << "Qualifivation      : " << qualification << endl;
    }
};

class Publication
{
private:
    string pubname;

public:
    void get_data()
    {
        cout << "Enter name of publication: ";
        cin >> pubname;
        cout << endl;
    }

    void put_data()
    {
        cout << "Publication name   : " << pubname << endl;
    }
};

class Book : public Author, public Publication
{
private:
    string title;
    float price;

public:
    void get_data()
    {
        cout << "Enter title and price of book: ";
        cin >> title >> price;
        cout << endl;
    }

    void put_data()
    {
        cout << "Title              : " << title << endl;
        cout << "Price              : " << price << endl;
    }
};

int main()
{
    Book book;
    book.Author::get_data();
    book.Publication::get_data();
    book.get_data();
    book.Author::put_data();
    book.Publication::put_data();
    book.put_data();
    return 0;
}