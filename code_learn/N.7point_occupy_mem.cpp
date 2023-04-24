#include <iostream>
using namespace std;

int main(){
    //指针所占的内存空间
    int a = 10;

    int * p = &a;
    
    cout << "sizeof (int *)" << sizeof(int *) << endl;
    cout << "sizeof (int *)" << sizeof(float *) << endl;
    cout << "sizeof (int *)" << sizeof(double *) << endl;
    cout << "sizeof (int *)" << sizeof(char * ) << endl;
    cout << "sizeof (int *)" << sizeof(*p) << endl;

    return 0;
}