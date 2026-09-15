#include <iostream>
#include<cstring>

int main()
{
    using namespace std;
    const int size = 15;
    char name1[size] = "Z123";
    char name2[size] = {};
    cout << "my name is " << name1 << endl;
    cout << "what is your name? ";
    cin >> name2;
    cout << "your name has " << strlen(name2) << " characters" << endl;
    name2[3] = '\0';
    cout << "your initials are " << name2 << endl;
    return 0;
}