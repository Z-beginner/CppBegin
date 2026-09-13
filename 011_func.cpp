#include <iostream>
float bmi(float, float);

int main(){
    using namespace std;
    float height;
    float weight;
    cout << "input your height: ";
    cin >> height;
    cout << "input your weight: ";
    cin >> weight;
    cout << bmi(height, weight) << endl;
    return 0;
}

float bmi(float height, float weight)
{
    float bmi;
    bmi = weight / (height * height);
    return bmi;
}