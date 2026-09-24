#include <iostream>

int main(){
    using namespace std;
    char cont = 'p';
    cout << "input \'p\' or nothing to kill the program." << endl;
    do{
        cin >> cont;
    }while(cont != 'p' and cont != '\0');
    //program can't again!!!
    //难用死了
    //出口判断
    //感觉不如while if一根
        cout << "input \'p\' or nothing to kill the program." << endl;

    //etc.
    cout << "input \'p\' or nothing to kill the program." << endl;
    bool continue1 = true;
    while (continue1){
        char input = 'p';
        cin >> input;
        if (input == 'p'){
            continue1 = false;
        }
    }
    //ds 说在使用continue的时候，二者是有差距的
    return 0;
}