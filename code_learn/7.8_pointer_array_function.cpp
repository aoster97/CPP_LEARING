#include <iostream>
using namespace std;

/*
    案例描述: 封装一个函数，利用冒泡排序，实现对整型数组的升序排序
例如数组：int arr[10]= {4,3,6,9,1,2,10,8,7,5};
*/
void bubble(int *arr)
{
    for (int i = 9; i > 0; i--)
    {
        int *p = arr;
        while (p < arr + i)
        {
            if (*p > *(p + 1))
            {
                int temp = *p;
                *p = *(p + 1);
                *(p + 1) = temp;
            }
            p++;
        }
    }
}

int main()
{
    int arr[10] = {4, 3, 6, 9, 1, 2, 10, 8, 7, 5};
    int *p = arr;
    bubble(p);
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << endl;
    }
}