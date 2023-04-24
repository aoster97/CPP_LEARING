#include <iostream>
using namespace std;

int add(int num1 ,int num2)
{
    int sum = num1 + num2;
    return sum;
}

int main(){
    int a = 1;
    int b = 2;
    //函数调用的语法 
    int c = add(a,b);
    cout << "两数之和:" << c << endl;
    return 0;
}