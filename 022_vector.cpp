#include <iostream>
#include <vector>

int main ()
{
    using namespace std;
    vector<int> vector1;
    vector1.push_back(10);
    vector1.push_back(20);
    vector1.push_back(30);
    cout << vector1[0] << endl;
    cout << vector1.size() << endl;
    vector1.push_back(40);
    cout << vector1.size() << endl;
    vector1.pop_back();
    vector1.erase(vector1.begin() + 1);
    return 0;
}