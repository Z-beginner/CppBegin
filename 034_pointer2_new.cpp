#include <iostream>

int main()
{
    using namespace std;
    //new:
    int *pt = new int;
    *pt = 10086;
    cout << "pt is " << pt << endl;
    //before using new:
    int num1;
    int *num2 = &num1;
    num1 = 10086;
    cout << "the address of num1 is " << num2 << endl;
    return 0;
}