#include <iostream>
using namespace std;

int main()
{
    // 数组名用途
    // 1,可以通过数组名统计整个数组占用的内存大小
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << "整个数组占内存的空间:" << sizeof(arr) << endl;
    cout << "每个元素占内存的空间:" << sizeof(arr[0]) << endl;
    cout << "数组中元素的个数:" << sizeof(arr) / sizeof(arr[0]) << endl;

    // 2,可以通过数组名查看数组的首地址
    cout << "数组的首地址:" << reinterpret_cast<long int>(arr) << endl;
    /*
    "reinterpret_cast" 运算符允许将指针类型转换为整数类型，
    并用于在这里将指针 "arr" 转换为 "long int" 类型。
    这将避免在将内存地址作为整数值存储时出现信息丢失。
    */

    cout << "数组的首地址:" << reinterpret_cast<long int>(&arr[0]) << endl;
    cout << "数组的第二个首地址" << reinterpret_cast<long int>(&arr[1]) << endl;

    // 数组名是一个常量,因此不可赋值
}