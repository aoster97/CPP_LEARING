#include <iostream>
using namespace std;

int main()
{
    // 数据类型 数组名[长度]
    int arr[5];
    // 给数组中的元素进行赋值
    arr[0] = 10;
    arr[1] = 10;
    arr[2] = 10;
    arr[3] = 10;
    arr[4] = 10;
    // 访问数据元素
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }
    cout << "=======================================" << endl;
    // 定义数组的方式2,初始化
    // 如果只初始化了部分的数据,
    int arr2[5] = {10, 20, 30};
    for (int i = 0; i < 5; i++)
    {
        cout << arr2[i] << endl;
    }

    cout << "=======================================" << endl;
    // 定义数组的方式3, 数据类型 变量名称[] = {初始化的元素}
    int arr3[] = {10, 20, 30};
    for (int i = 0; i < sizeof(arr3) / sizeof(int); i++)
    {
        cout << arr3[i] << endl;
    }
}