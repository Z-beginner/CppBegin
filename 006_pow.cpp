/* Pow:
pow(double1 ,double2)
mean:
double1^double2
1的2次方
 */

#include <iostream>
#include <cmath>

int main()
{
    using namespace std;
    double x;
    double y;
    double answer;
    cout << "number1: ";
    cin >> x;
    cout << "number2: ";
    cin >> y;
    answer = pow(x, y);
    cout << answer << endl;
    return 0;
}