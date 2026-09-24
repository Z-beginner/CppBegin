#include <iostream>
#include <cstdlib>

int main()
{
    using namespace std;
    int try_num = 0;
    int num = rand();
    int answer = num % 1000;
    bool gameover = true;
    while (gameover){
        int nums;
        cin >> nums;
        if (nums != answer){
            if (nums > answer){
                cout << "too big!" << endl;
                try_num += 1;
            }
            else{
                cout << "too small!" << endl;
                try_num += 1; 
            }
        }
        else{
            cout << "win!" << endl;
            cout << "and you try " << try_num << "times totally" << endl;
            gameover = false;
        }
    }
    return 0;
}