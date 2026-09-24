#include <iostream>

int main(){
    using namespace std;
    int num;
    cin >> num;
    switch (num){
        case 1 : cout << "you choose the case 1" << endl;
                break;
                //如果没有break，将继续执行下面的所有语句，直到结束或遇到break
        case 2 : cout << "you choose the case 2" << endl;
                break;
        default : cout << "you choose the case default" << endl;
                break;
    }
    return 0;
}