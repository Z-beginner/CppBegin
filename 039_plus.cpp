#include <iostream>

int main()
{
    using namespace std;
    int nums[5] = {1,2,4,8,16};
    int *pt = nums;
    cout << pt << endl;
    cout << ++pt << endl;
    cout << *pt++ << endl;
    cout << (*pt)++ << endl;
    return 0;
}