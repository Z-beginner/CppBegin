#include <iostream>
#include <string>

int main ()
{
    using namespace std;
    string str1 = "hello";
    str1.clear();
    cout << str1 << endl;
    bool str1_empty = str1.empty();
    cout << str1_empty << endl;
    string str2 = "hellohello";
    cout << str2.find("e") << endl;
    cout << str2.find("o", 5) << endl;
    cout << str2.find("o") << endl;
    cout << str2.find("q") << endl;
    cout << str2.rfind("o") << endl;
    return 0;
}