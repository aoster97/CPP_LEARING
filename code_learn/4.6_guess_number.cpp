#include <iostream>
using namespace std;

int main()
{
    int a;
    int num = rand() % 100 + 1;
    // cout << num << endl;
    while (true)
    {
        cout << "请输入您猜的数字(输入9999结束):" << endl;
        cin >> a;
        if (a == 9999)
        {
            break;
        }
        
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