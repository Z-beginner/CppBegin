#include <iostream>

int main()
{
    using namespace std;
    //way1
    string str = "hello";
    char rts[20] = {};
    int j = 0;
    for (int i = str.size()-1; i>=0; --i,++j)
        rts[j] = str[i];
    cout << rts << endl;
    //way2
    string str1 = "world";
    char temp;
    int x, y;
    for (y = 0, x = str1.size() - 1;y < x; --x,++y)
    {
        temp = str1[x];
        str1[x] = str1[y];
        str1[y] = temp;
    }
    cout << str1 << endl;
    return 0;
}