#include <iostream>

using namespace std;

void cdshi(int x);

int main()
{
    int n = 0;
    while (n != 10)
    {
        cdshi(100);
        ++n;
        cout << "n = " << n << endl;
    }

    return 0;
}

void cdshi(int x)
{
    static int xxx = x;
    cout << "executed!" << endl;
    --xxx;
    cout << "xxx= " << xxx << endl;
}
/*
 * 形参：函数声明和定义语句中，传入的参数
 * 局部变量：在函数外部不可用，但在函数执行完毕后，会被自动销毁
 * 局部静态变量：在函数外部不可用，但在函数执行完毕后，不会被自动销毁，
 */