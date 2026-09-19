#include <iostream>

int main()
{
    using namespace std;
    long long result[10];
    result[0] = 1LL;
    for (int i=1; i<10; i++)
        result[i] = i * result[i-1];
    for (int i=0; i<10; i++)
        cout << result[i] << endl;
    //一个for循环只能跟着一条语句
    //若想要多语句需要使用{}
    //如下：
    /*
    for (int i=1; i<10; i++){
        result[i] = i * result[i-1];
        cout << result[i] << endl;
    }
    缩进并不影响语义
    */
   string words;
   cin >> words;
   for (int i = 0; i < words.size(); i++){
        cout << words[i] << endl;
   }
    return 0;
}