#include <iostream>
//const:限定符

int main()
{
    using namespace std;
    const int a = 111;
    cout << a << endl;
    int b;
    b = a;
    b = 100;
    cout << b << endl;
    return 0;
}