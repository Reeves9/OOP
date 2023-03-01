#include <iostream>
#include <iomanip> // included to use the formatted output functions
using namespace std;

int main()
{
    char c = 'A';
    double pi = 3.14169265359;
    int num = 42;
    cout.width(5); // adds 5 spaces before the output
    cout << c << endl;
    cout << "pi is " << setprecision(3) << pi << endl;                                       // limits the output to three digits
    cout << "the answer to ultimate question is " << setw(5) << setfill('0') << num << endl; // setfill() fills the empty spaces with the given parameter setw() adds spaces according to the parameter
    return 0;
}