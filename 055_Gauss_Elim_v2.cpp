#include <iostream>

int main(){
    using namespace std;
    int temp1;
    cout << "输入线性方程次数：";
    cin >> temp1;
    const int x_num = temp1;
    double nums[x_num][x_num + 1];
    cout << "以增广矩阵的形式输入各项系数：" << endl;
    for (int i = 0; i < x_num; i++){
        for (int j = 0; j < x_num + 1; j++){
            cin >> nums[i][j];
            if (nums[i][j] == 0){
                cout << "sorry,0 is not aceepted" << endl; //0不会处理，暂时先这样吧
                return 0;
            }
        }
    }
    double temp;
    for (int p = 0;p < x_num; p++){
        for (int i = p+1; i < x_num; i++){
            temp = nums[i][p] / nums[p][p];
            for (int j = p; j <= x_num; j++){
                nums[i][j] -= temp * nums[p][j];
            }
        }
    }
    for (int p = x_num - 1; p >= 0; p--){
        for (int i = p - 1; i >= 0; i--){
            temp = nums[i][p] / nums[p][p];
            for (int j = p; j <= x_num; j++){
                nums[i][j] -= temp * nums[p][j];
            }
        }
    }
    cout << "\n" << "\n" << "\n";
    for (int i = 0; i < x_num; i++){
        for (int j = 0; j < x_num + 1; j++){
            cout << nums[i][j] << "     ";
            }
        cout << endl;
    }
    cout << "\n" << "\n" << "\n";
    double x[x_num];
    cout << "方程组的解为：" << endl;
    cout << "[" << endl;
    for (int i = 0; i < x_num; i++){
        x[i] = nums[i][x_num] / nums[i][i];
        cout << x[i] << endl;
    }
    cout << "]" << endl;
    return 0;
}