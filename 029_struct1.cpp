#include <iostream>
#include <string>
struct cat
{
    char first_name[20];
    std::string second_name;
    int age;
    float weight;
};//作用域在全局中

int main()
{
    using namespace std;
    struct dog
    {
        char first_name[20];
        string second_name;
        int age;
        float weight;
    };//作用域在main函数中
    dog dog1 = {
        "Tommy", "Tom", 5, 10.5
    };
    cout << dog1.first_name << endl;
    cat cat1 = {
        "Mimi", "Kitty", 3, 5.2
    };
    cout << cat1.age << endl;
    //初始化
    dog dog2 = {};
    dog2.second_name = "Lily";
    dog2.age = 2;
    dog2.weight = 10.0;
    dog2.first_name[0] = 'M';
    dog2.first_name[1] = 'i';
    dog2.first_name[2] = 'k';
    dog2.first_name[3] = 'e';
    cat cat2 = {};
    cat2 = cat1;
    cat2.age = 4;
    cout << cat2.age <<endl;
    cout << cat1.age <<endl;
    //与py的list,dict不同，结构体是值传递，赋值后两个结构体互不影响
    return 0;
}