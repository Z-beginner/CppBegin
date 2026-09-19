#include <iostream>

int main()
{
    using namespace std;
    int i;
    for (i = 0; i < 5; i++)    //initilization,test,update
    //i++  ~~  i+=1  ==  ++i
    /*
    i=1
    a = i++
    final: a=1,i=2

    i=1
    a= (i+=1)
    final:a=2,i=1
    */
        cout << i << endl;
    for (int a=1; a<5; a++)
        cout << a << endl;
        //a只存在于for循环中
    //cout << a << endl;  --invalid
    return 0;
}