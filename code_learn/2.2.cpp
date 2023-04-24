#include <iostream>
using namespace std;

int main()
{
  //1.单精度
  //2.双精度
  //默认情况下:输出一个小数会显示6位有效数字 
    float a = 3.1415926f;
    cout << "单精度小数:" << a << endl;

    double b = 3.1415926;
    cout << "双精度小数:" << b << endl; 

    cout << "单精度小数:" << sizeof(float) << endl;
    cout << "双精度小数" << sizeof(double) << endl;

    //科学计数法
    float f2 = 3e2; // 3*10^2
    cout << "f2=" << f2 << endl;

    double f3 = 3e-2; // 3*0.1^2
    cout << "f3=" << f3 << endl;

    system("pause");

    return 0;
}
