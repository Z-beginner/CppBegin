#include <iostream>
#include <string>

int main ()
{
    using namespace std;
    char name1[20];
    string name2;
    cin >> name1;
    cin >> name2;
    cout << "name1: " << name1 << endl;
    cout << "name1(2) is " << name1[1] << endl;
    cout << "name2: " << name2 << endl;
    cout << "name2(2) is " << name2[1] << endl;
    return 0;
}