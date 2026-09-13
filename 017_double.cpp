#include <iostream>

int main ()
{
    using namespace std;
    float a = 10.0 / 3.0;
    double b = 10.0 / 3.0;
    const float c = 1.0e6;
    cout << fixed;
    cout << "a" << a * c << endl;
    cout << "b" << b * c << endl;
    return 0;
}