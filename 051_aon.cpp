#include <iostream>

int main()
{
    using namespace std;
    int a_num = 1;
    int o_num = 2;
    int n_num = 3;
    //and
    if (a_num < 2 && a_num > 0){
        cout << "&&" << endl;
    }
    if (a_num < 2 and a_num > 0){
        cout << "and" << endl;
    }
    //or
    if (o_num < 3 || o_num > 100){
        cout << "||" << endl;
    }
    if (o_num < 3 or o_num > 100){
        cout << "or" << endl;
    }
    //not
    if (! n_num == 0){
        cout << "!" << endl;
    }
    if (not n_num == 0){
        cout << "not" << endl;
    }
    return 0;
}