/*
Rand:
返回一个随机整数，不接受参数
*/

#include <iostream>
#include <cstdlib>

int main(){
    using namespace std;
    int number;
    number = rand();
    int answer;
    answer = number % 1000;
    cout << "the rand number is " << answer << endl;
    return 0;
}