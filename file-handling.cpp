#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ofstream file("/home/reeves/Documents/test.txt"); // creates a file to the given location
    file << "well hello there" << endl;               // writes to the file
    file.close();                                     // closes the file
    string text;
    ifstream Rfile("/home/reeves/Documents/test.txt");
    while (getline(Rfile, text))
    {
        cout << text << endl;
    }
    Rfile.close();
}