#include <iostream>
using namespace std;

int main(){
    //二维数组名称用途

    //1. 可以查看占用内存空间的大小
    int arr[2][3] = {
        {1,2,3},
        {4,5,6}
    };
    cout << "二维数组占用的内存空间:" << sizeof(arr) <<endl;
    cout << "二维数组第一行占用的内存空间:" << sizeof(arr[0]) << endl;
    cout << "二维数组第一个元素占用的内存空间" << sizeof(arr[0][0]) << endl;

    //二维数组的行数和列数
    cout << "二维数组的行数" << sizeof(arr)/sizeof(arr[0]) << endl; 
    cout << "二维数组的列数" << sizeof(arr[0])/sizeof(arr[0][0]) << endl; 

    //2.查看首个元素的内存位置
    cout << "二维数组的内存起始位置:" << arr << endl;
    //cout << "二维数组的内存起始位置:" << (int)&arr[0][0] << endl;

    return 0 ;
}