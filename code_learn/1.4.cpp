#include <iostream>
using namespace std;
//宏常量
#define Day 7

int main()
{ 
    //常量一旦进行了修改就会出错
    //Day = 12;
    
    cout << "一周有" << Day << "天" << endl;
    //const修饰的变量不能被修改
    // month = 13;
    const int month = 12 ; 
    cout << "一年有" << month << "个月" << endl;
    
    return 0;
}