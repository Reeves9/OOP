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

string decrypt(string ciphertext, int shift)
{
    string plaintext = "";
    for (int i = 0; i < ciphertext.length(); i++)
    {
        char c = ciphertext[i];
        if (isalpha(c))
        {
            c = toupper(c);
            c = (c - 'A' - shift + 26) % 26 + 'A';
        }
        plaintext += c;
    }
    return plaintext;
}

int main()
{
    string plaintext, cyphertext;
    int shift, choice;
start:
    system("clear");
    cout << "1.Encrypt" << endl;
    cout << "2.Decrypt" << endl;
    cout << "Enter your choice" << endl;
    cin >> choice;
    if (choice == 1)
    {
        system("clear");
        cout << "Enter Text" << endl;
        cin >> plaintext;
        cout << "Enter key:" << endl;
        cin >> shift;
        cyphertext = encrypt(plaintext, shift);
        cout << "Encrypted Text :" << endl;
        cout << cyphertext << endl;
        system("read");
        goto start;
    }
    else if (choice == 2)
    {
        system("clear");
        cout << "Enter Cyphertext:" << endl;
        cin >> cyphertext;
        cout << "Enter key:" << endl;
        cin >> shift;
        plaintext = decrypt(cyphertext, shift);
        cout << "Plaintext is :" << endl;
        cout << plaintext << endl;
        system("read");
        goto start;
    }
    else
    {
        cout << "wrong input" << endl;
        goto start;
    }
    return 0;
}