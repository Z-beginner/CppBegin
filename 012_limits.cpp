#include <iostream>
#include <climits>

int main()
{
    using namespace std;
    int n_int = INT_MAX;
    cout << "int: " << n_int << endl;
    cout << "int bit: " << sizeof(int) << endl;
    short n_short = SHRT_MAX;
    cout << "short: " << n_short << endl;
    cout << "short bit: " << sizeof(short) << endl;
    long n_long = LONG_MAX;
    cout << "long: " << n_long << endl;
    cout << "long bit: " << sizeof(long) << endl;
    long long n_llong = LLONG_MAX;
    cout << "llong: " << n_llong << endl;
    cout << "llong bit: " << sizeof(long long) << endl;
    char n_char = CHAR_MAX;
    cout << "char: " << n_char << endl;
    cout << "char bit: " << sizeof(char) << endl;
    return 0;
}