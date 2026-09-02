#include <iostream>
using namespace std;

int main()
{
    int carrots;
    cout << "input the number of carrots:";
    cin >> carrots;
    cout << "the namber of carrots is " << carrots << endl;
    carrots -= 1;
    cout << "the number of carrots is "
         << carrots
         << ",now"
         << endl;
    return 0;
}