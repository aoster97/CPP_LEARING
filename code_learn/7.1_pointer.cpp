#include <iostream>
using namespace std;

int main(){
    //1.定义指针
    int a = 10;
    //定义指针的语法 : 数据类型 * 指针变量名
    int * p;
    //让指针记录变量a的地址
    p = &a;
    cout << "a的地址为: " << &a << endl;
    cout << "指针p为" << p << endl;

    //2,指针的应用
    //可以通过解应用的方式来找到指针指向的内存
    //指针前面加上 *代表解引用,找到指针指向内存中的数据
    *p = 1000;
    cout << "a=" << a << endl;
    cout << "*p =" << *p << endl;

    return 0;
}