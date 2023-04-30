#include <iostream>
using namespace std;

int main()
{
    int score[3][3] =
        {
            {100, 100, 100},
            {90, 50, 100},
            {60, 70, 80}};

    int h, l, e;
    int sum[3] = {0};

    // 行数
    h = sizeof(score) / sizeof(score[0]);
    // 列数
    l = sizeof(score[0]) / sizeof(score[0][0]);
    // 元素个数
    e = sizeof(score) / sizeof(score[0][0]);

    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < l; j++)
        {
            sum[i] += score[i][j];
        }
        cout << "Sum of row " << i + 1 << ": " << sum[i] << endl;
    }
}
/*
可以重复在内层循环和外层循环之前插入变量初始化为0,来重复使用单个变量
for(int a = 0;a < 3; a++){
    sum = 0;
    for(int b = 0;b < 3;b++){
        sum += score[a][b]
    }
    cout << "第" << a +1 << "的分数:" << sum <<endl;
}

*/
