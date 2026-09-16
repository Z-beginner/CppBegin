#include <iostream>

union one4all
{
    int int_val;
    long long_val;
    long long ll_val;
    float float_val;
};

int main()
{
    using namespace std;
    one4all int1;
    int1.int_val = 15;
    cout << int1.int_val;
    int1.float_val = 1.12;
    cout << int1.float_val;
    return 0;
}
//wait
//现在还没有感受到这个有什么好用的地方