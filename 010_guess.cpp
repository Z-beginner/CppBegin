#include <iostream>
#include <cstdlib>

int main()
{
    using namespace std;
    int number;
    number = rand();
    int answer;
    answer = number % 1000;
    bool a;
    a = true;
    int b;
    b = 0;
    while(a){
        int x;
        cout << "guess a number: ";
        cin >> x;
        b += 1;
        if (x == answer){
            cout << "you win!" << endl;
            a = false;
            cout << b << " times" << endl;
        }
        else if (x > answer){
            cout << "so big" << endl;
        }
        else {
            cout << "so small" << endl;
        }
    }
}