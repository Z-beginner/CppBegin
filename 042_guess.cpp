#include <iostream>
#include <cstring>

int main()
{
    using namespace std;
    char answer[20] = {};
    cin >> answer;
    const int num = strlen(answer) - 1;
    cout << num << endl;
    char word1[num] = {};
    for (int i = 0; i<=num; i++)
        word1[i] = 'a';
    for (int i = 0; i <= num; i++){
        for (char ch = 'a'; ch != answer[i]; ch++){
            word1[i] = ch;
            cout << "test: " << word1 << endl;
        }
    }
    cout << word1 << endl;
    return 0;
}
//失败！！！！！！！！！！！！！！！！！！！