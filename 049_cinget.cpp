#include <iostream>

int main(){
    using namespace std;
    char name[20];
    cin.get(name, 20);
    cin.get();//提取回车换行
    char name1;
    cin.get(name1);
    while (name1 != 'p'){
        cout << name1 << endl;
        cin.get(name1);
    }
    cout << " " << endl;
    return 0;
}