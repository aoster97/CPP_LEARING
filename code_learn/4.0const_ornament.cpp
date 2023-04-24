#include <iostream>
using namespace std;

int main(){
    /*
    const修饰指针有三种情况
    1,const修饰指针
    2,const修饰变量
    3,const即修饰指针,又修饰变量
    */
   int a = 10;
   int b = 10;
   int * p = &a;

    //常量指针 指针的指向可以修改
    const int * p = &a;

    /*  
        p = &b; 指针的指向可以改变
        *p = 20; 指针中内存的值不能改变
    */
   p = &b;

    //指针常量 指针的指向不可以改,指针指向的值可以改
    int * const p = &a;
    /*
        p = &b; 指针的指向不可以改
        *p = 20; 指针中内存的值可以修改
    */
   
   //常数指针 
   const int * const p = &a;
   /*
      p = &b; 指针的指向不可以改
        *p = 20; 指针中内存的值不可以修改  
   */
  

}