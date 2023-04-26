#include <iostream>
using namespace std;

int main()
{
    int a;
    int num = rand() % 100 + 1;
    // cout << num << endl;
    cout << "请输入您猜的数字" << endl;
    cin >> a;
    while (a != 9999)
    {
        if (a > num)
        {
            cout << "猜测过大" << endl;
        }
        else if (a = num)
        {
            cout << "数字相等" << endl;
            break;
        }
        else if (a < num)
        {
            cout << "猜测过小" << endl;
        }
    }
}