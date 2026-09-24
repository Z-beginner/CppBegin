#include <iostream>

int main(){
    using namespace std;
    int nums[5] = {1, 4, 5, 3, 6};
    for (int i : nums){
        cout << i << endl;
    }
    return 0;
}