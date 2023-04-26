#include <iostream>
using namespace std;

int main()
{
    // 选择语句, 单行if语句
    // 用户输入分数,如果分数大于600,视为考上了一本大学,在屏幕上输出
    int score;
    cout << "用户请输入分数:" << endl;
    cin >> score;
    cout << "您输入的分数是:" << score << endl;
    // 单行if语句
    // if语句后面不要加上分号
    if (score > 600)
    {
        cout << "您可以上一本大学" << endl;
    }

    // 多行if语句
    int score2;
    cout << "用户请输入分数:" << endl;
    cin >> score2;
    cout << "您输入的分数是:" << score2 << endl;
    if (score > 600)
    {
        cout << "您可以上一本大学" << endl;
    }
    else
    {
        cout << "您未考上一本大学" << endl;
    }

    // 多条件的if语句
    // 输入一个考入分数,如果分数大于600,视为考上一本大学
    // 如果分数大于500 ,视为考上二本大学
    // 如果分数大于400 ,视为考上三本大学
    int score3;
    cout << "用户请输入分数:" << endl;
    cin >> score3;
    cout << "您输入的分数是:" << score3 << endl;

    if (score3 > 600)
    {
        cout << "考上了一本的大学" << endl;
    }
    else if (score > 500)
    {
        cout << "考上了二本的大学" << endl;
    }
    else if (score > 400)
    {
        cout << "考上了三本的大学" << endl;
    }
    else
    {

        cout << "你只配上专科" << endl;
    }
}