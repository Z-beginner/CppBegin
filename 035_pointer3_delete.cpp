#include <iostream>

int main()
{
    using namespace std;
    int *pd = new int;
    *pd = 10086;
    cout << *pd << "//" << pd << endl;
    delete pd;
    cout << pd << endl;
    //pd仍指向原来的地址，但改地址上的数据已经被删除
    return 0;
}