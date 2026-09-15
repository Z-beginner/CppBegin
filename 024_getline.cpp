#include <iostream>

int main ()
{
    using namespace std;
    /*
    char name1[20];
    char name2[20];
    cin >> name1;
    cout << "Hello, " << name1 << "!" << endl;
    cin >> name2;
    cout << "Hello, " << name2 << "!" << endl;
    */
    char name3[20];
    char name4[20];
    cin.getline(name3, 20);
    cout << "Hello, " << name3 << "!" << endl;
    cin.getline(name4, 20);
    cout << "Hello, " << name4 << "!" << endl;
}