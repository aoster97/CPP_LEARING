#include <iostream>
using namespace std;

int main()
{
    int a;
    int num = rand() % 100 + 1;
    // cout << num << endl;
    while (a != 9999)
    {
        cout << "请输入您猜的数字(输入999结束):" << endl;
        cin >> a;
        if (a > num)
        {
            cout << "猜测过大." << endl;
        }
        else if (a = num)
        {
            cout << "数字相等,恭喜猜对了!!!" << endl;
        }
        else if (a < num)
        {
            cout << "猜测过小." << endl;
        }
    }
}