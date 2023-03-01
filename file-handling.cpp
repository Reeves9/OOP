#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
    ofstream file("/home/reeves/Documents/test.txt"); // creates a file to the given location
    file << "well hello there" << endl;               // writes to the file
    file.close();                                     // closes the file
    string text;
    ifstream Rfile("/home/reeves/Documents/text.txt");
    while (getline(Rfile, file))
    {
        cout << text << endl;
    }
    Rfile.close();
}