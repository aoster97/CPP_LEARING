#include <iostream>
using namespace std;

int main()
{
    int score = 0;
    cout << "请输入一个分数" << endl;
    cin >> score;
    cout << "你输出的分数是" << score << endl;
    if (score > 700)
    {
        cout << "你能考上一本" << endl;
        if (score > 750)
        {
            cout << "你能上清华" << endl;
        }
        else if (score > 720)
        {
            cout << "你能上北大" << endl;
        }
    }
    else if (score > 600)
    {
        cout << "你能考上二本" << endl;
    }
    else if (score > 500)
    {
        cout << "你能考上三本" << endl;
    }
    else
    {
        cout << "你适合打工" << endl;
    }
}