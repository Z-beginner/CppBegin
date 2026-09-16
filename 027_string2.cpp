#include <iostream>
#include <string>

int main()
{
    using namespace std;
    string str1;
    string str2 = "imback";
    str1 = str2;
    cout << "str1: " << str1 << endl;
    string str3;
    str3 = str2 + str1;
    cout << "str3: " << str3 << endl;
    str1 += str2;
    cout << "new str1: " << str1 << endl;
    return 0;
}