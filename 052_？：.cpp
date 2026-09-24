#include <iostream>

int main()
{
    using namespace std;
    int num1,num2;
    cin >> num1 >> num2;
    int num3 = num1 > num2 ? num1 : num2;
    // if num1 > num2,then num3 = num1,else num3 = num2
    // if exp1 is ture,then exp2,else exp3
    cout << "the max number is " << num3 << endl;
    return 0;
}