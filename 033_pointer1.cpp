#include <iostream>

int main()
{
    using namespace std;
    int num1 = 4;
    int *num2;//int* num2
    num2 = &num1;
    cout << "num1 is " << *num2 << endl;
    cout << "the address of num1 is " << num2 << endl;
    *num2 += 1;
    cout << "now num1 is " << num1 << endl;

    //wrong:
    //int *num3;
    //*num3 = 111;
    //pointer can't store any data

    //wrong:
    //int *pt;
    //pt = 0xB800000;
    //整数不可以直接被简单地赋值给指针作为地址

    //ture:
    int *pt;
    pt = (int *) 0xB800000;
    cout << "the address of pt is " << pt << endl;
    return 0;
}