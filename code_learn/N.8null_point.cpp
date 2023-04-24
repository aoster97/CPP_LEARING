#include <iostream>
using namespace std;

int main(){
    // 1,空指针:指针指向内存中为0的空间
    int * p = NULL;

    // 用途:初始化指针变量
    // 2,空指针指向的内存是不能访问的
    //0~255之间的内存编号是系统占用的,因为不可以访问
    *p = 100;

} 