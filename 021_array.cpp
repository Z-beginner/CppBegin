#include <iostream>

int main()
{
    using namespace std;
    short months[12] = {}; //初始化
    short months2[12]; //未初始化
    months[0] = 1;
    cout << "The first month is " << months[0] << endl;
    months[0] = 2;
    cout << "the new first month is " << months[0] << endl;
    cout << months[1] << endl;
    cout << months[2] << endl;
    int times[3] = {
        4, 2, 3
    };
    cout << "the first time is ";
    cout << times[0] << endl;
    return 0;
}