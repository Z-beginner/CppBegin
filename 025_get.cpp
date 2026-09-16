#include <iostream>

int main ()
{
    using namespace std;
    char name[20];
    cin.get(name, 20);
    cin.get();
    cout << name << endl;
    cin.get(name,20).get();
    cout << name << endl;
    return 0;
}