#include <iostream>

int main(){
    using namespace std;
    int td_array[3][4] = {
        {11, 21, 31, 41},
        {12, 22, 32, 42},
        {13, 23, 33, 43}
    };
    for (int m = 0; m < 3; m++){
        for (int n = 0; n < 4; n++){
            cout  << td_array[m][n] << " ";
        }
        cout << endl;
    }
    for (int m = 0; m < 3; m++){
        for (int n = 0; n < 4; n++){
            td_array[m][n] = m + 2*n;
            cout << td_array[m][n] << " ";
        }
        cout << endl;
    }
    return 0;
}