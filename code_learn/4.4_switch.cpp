#include <iostream>
using namespace std;

int main()
{
    int i;
    cout << "请你为电影打分(1-10):" << endl;
    cin >> i;
    cout << "您输入的分数是:" << i << endl;

    switch (i)
    {
    case 10:
    case 9:
    case 8:
        cout << "您认为这个电影是一部经典电影" << endl;
        break;
    case 7:
    case 6:
    case 5:
        cout << "您认为这个电影是一部很好的电影" << endl;
        break;
    default:
        cout << "您认为这个电影是一部烂片" << endl;
    }

    // switch特点:只能判断是整型或者是字符型,不可以是一个区间
    // switch优点:结构清晰,执行效率高
}