#include <iostream>
using namespace std;
int main()
{
    char data, string[50];
    data = cin.get(); // accepts a single charecter
    cout.put(data);   // inserts a single charecter to a variable
    cin.get(data);    // another method
    cout.put(data);
    cin.getline(string, 50); // method of to enter a sentence
    cout.write(string, 50);  // method of outputing that sentence
    return 0;
}