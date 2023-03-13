#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string text;
    ofstream myfile("text.txt");
    myfile << "this is the first line of text" << endl;
    myfile.close();

    ofstream myyfile("text.txt", ios::app);
    myyfile << "this is second line in append mode" << endl;
    myyfile.close();

    ifstream file("text.txt");
    while (getline(file, text))
    {
        cout << text << endl;
    }
    file.close();

    ofstream cfile("reeves.txt");
    ifstream sfile("text.txt");
    while (getline(sfile, text))
    {
        cfile << text << endl;
    }
    cfile.close();
    sfile.close();

    return 0;
}