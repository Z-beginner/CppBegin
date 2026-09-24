#include <iostream>

int main()
{
    using namespace std;
    char name[20] = {};
    int i = 0;
    cin >> name;
    while(name[i] != '\0'){
        int num_of_char = int(name[i]);
        cout << name[i] << ": " << num_of_char << endl;
        i++;
    }
    return 0;
}