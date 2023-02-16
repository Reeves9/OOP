#include <iostream>
using namespace std;

int main()
{
    int num_int;
    double num_double = 9.54;
    num_int = num_double; // implicit type conversion
    cout << num_int << endl;
    num_double = 3.14;
    num_int = (int)num_double; // ecplicit type conversion (type casting)
    cout << num_int << endl;
    string num = "123";
    num_int = stoi(num); // "stoi()"(string to int) function is used to typecast string to integer
    cout << num_int << endl;
    char str[] = "123";
    num_int = atoi(str);
    cout << num_int << endl; // "atoi()"(array to integer) function is used to typecat array to integer
    num_int = 145;
    num = to_string(num_int); // "to_string()" is used to typecast other types to string
    cout << num << endl;
    num = "123.145";
    float num_float = stof(num); // "stof()" (string to float) function is used to typecast string to float
    num_double = stod(num);      // "stod()" (string to double) function is used to typecast string to double
    cout << num_float << " " << num_double << endl;
    return 0;
}
// "atod()" (array to double) function is used to typecast array to double
// "atof()" (array to float) function is used to typecast array to float