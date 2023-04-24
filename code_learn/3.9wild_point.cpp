#include <iostream>
using namespace std;

int main(){
    //指针指向了非法的内存空间
    int * p = (int *)0X1100;

    //访问野指针报错
    cout << *p << endl;

    //空指针和野指针都不是我们申请的内存空间,因此不要访问  
}
    