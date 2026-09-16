#include <iostream>
#include <string>

int main()
{
    using namespace std;
    struct dog {
        string name;
        int age = 2;
        float weight;
    };
    dog dogg[19] = {};
    dogg[0] = {"lili", 4, 12.5};    //等号可选只适用于定义变量时初始化
    dogg[1].age = 5;
    dogg[2].weight = 4.7;
    cout << dogg[1].age << endl;
    //cout << dogg[2] << endl;  XXXXX
    dog doggg[5] {
        {"1", 1, 1.0},
        {"2", 2, 2.0}
    };
    cout << doggg[1].age << endl;
    cout << doggg[2].weight << endl;
    return 0;
}