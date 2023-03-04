#include <iostream>
#include <string>

using namespace std;

string encrypt(string plaintext, int shift)
{
    string cyphertext = "";
    for (int i = 0; i < plaintext.length(); i++)
    {
        char c = plaintext[i];
        if (isalpha(c))
        {
            c = toupper(c);
            c = (c - 'A' + shift) % 26 + 'A';
        }
        cyphertext += c;
    }
    return cyphertext;
}

int main()
{
    string plaintext;
    int shift;
    cout << "Enter any word" << endl;
    cin >> plaintext;
    cout << "Enter key" << endl;
    cin >> shift;
    string cyphertext = encrypt(plaintext, shift);
    cout << "encrypted string is: " << cyphertext << endl;
    return 0;
}