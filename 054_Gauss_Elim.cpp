//先试试三元方程
#include <iostream>

int main(){
    using namespace std;
    float a[3], b[3], c[3], k[3];
    float x, y, z;
    for (int i = 0; i < 3; i++){
        cin >> a[i] >> b[i] >> c[i] >> k[i];
    }
    //消a
    double at[3];
    for (int i = 1; i < 3; i++){
        at[i] = a[i] / a[0];
        a[i] = 0;
        b[i] = b[i] - at[i] * b[0];
        c[i] = c[i] - at[i] * c[0];
        k[i] = k[i] - at[i] * k[0];
    }
    double bt2 = b[2] / b[1];
    b[2] = 0;
    c[2] = c[2] - bt2 * c[1];
    k[2] = k[2] - bt2 * k[1];
    double ct_t[2];
    for (int i = 0; i < 2; i++){
        ct_t[i] = c[i] / c[2];
        c[i] = 0;
        b[i] = b[i] - ct_t[i] * b[2];
        k[i] = k[i] - ct_t[i] * k[2];
    }
    double bt_t = b[0] / b[1];
    b[0] = 0;
    k[0] = k[0] - bt_t * k[1];
    x = k[0] / a[0];
    y = k[1] / b[1];
    z = k[2] / c[2];
    cout << x << " " << y << " " << z << endl;
}

//或许应该写一个version2？
//还存在一些问题：
/*
1.参数的系数是0的情况
2.不止是三元方程，要是更多元的方程怎么处理，似乎需要循环套循环

似乎看起来并不简单
*/