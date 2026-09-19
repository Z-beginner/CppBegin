#include <iostream>

int main()
{
    using namespace std;
    char answer[20] = {};
    cin >> answer;
    char word[20] = {};
    for (int i = 0; i <= strlen(answer) - 1; i++){
        char ch = 'a';
        char an = answer[i];
        for (char ch = 'a'; ch <= an; ++ch){
            word[i] = ch;
            cout << word << endl;
        }
    }
    cout << "finally,i got it: "<< word << endl;
    return 0;
}