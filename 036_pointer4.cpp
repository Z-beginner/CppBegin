#include <iostream>

int main ()
{
    using namespace std;
    int *dy_int_array = new int [10];//创建10个int元素的数组
    dy_int_array[0] = 1;//指针dy_in_array被当作数组名来使用
    //此时直接将dy_int_array当作数组使用即可
    cout << *dy_int_array << endl;
    cout << dy_int_array << endl;//默认指向第一个元素
    dy_int_array[1] = 2;//当作数组的话 dy_int_array[1] 已经是一个int元素
    cout << dy_int_array[1] << endl;
    //获取第二个元素地址方法：
    cout << &dy_int_array[1] << endl;
    cout << dy_int_array + 1 << endl;
    dy_int_array += 1;
    cout << *dy_int_array << endl;
    dy_int_array -= 1;
    delete [] dy_int_array;
    /*
    对指针的一些思考：
    指针直接被当作数组名来使用真的合理吗
    倘若能这样写，是否会好一些：
    int *num_array = new int [10];
    cout << "the address of num_array[0] is " << num[0] << endl;
    cout << "the num_array[0] is " << *num[0] << endl;
    将num_array[0]作为指向int元素的指针
    而*num_array[0]作为int元素的值
    当然，这只是初学者的一些不成熟的想法
    或许这样改变会带来后续一些不必要的麻烦
    希望是这样吧

    二编：
    gpt给出的回复关于设计这样的原因是这样的：
    1.数组访问和指针访问统一
    2.支持直接修改元素
    3.符合下标表示元素的直觉
    4.与C语言兼容
    但是目前来看
    我还是不能够理解
    为什么一定需要以这种方式来创建指针数组
    如果是为了与数组访问统一的话
    为何不直接使用数组
    为了动态数组？
    是我才疏学浅了吧
    我真的不是很理解
    
    以前说python编程很不规范
    c/cpp作为底层语言，是规范的
    但目前来看
    把指针直接作为数组名来使用
    我并没有见到这有多么规范
    */
    return 0;
}