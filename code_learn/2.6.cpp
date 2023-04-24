#include <iostream>
using namespace std;

int main(){
    //bool变量的声明
    bool flag = true;
    cout << flag << endl;

    flag = false;
    cout << flag << endl;
    //bool变量占用的字符
    cout << "bool类型所占的空间" <<sizeof(flag) << endl;
}