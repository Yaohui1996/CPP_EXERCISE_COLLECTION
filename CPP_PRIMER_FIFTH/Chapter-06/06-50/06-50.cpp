//
// Created by Yaohui Li on 2021/2/14.
//

int main()
{
    return 0;
}

/*
 * (a) void f(int, int);和void f(double, double = 3.14);是可行函数。
 * 该调用具有二义性而不合法。 (b) void f(int); 是可行函数。调用合法。 (c) void
 * f(int, int);和void f(double, double = 3.14);是可行函数。 void f(int,
 * int);是最佳匹配。 (d) void f(int, int);和void f(double, double
 * = 3.14);是可行函数。 void f(double, double = 3.14);是最佳匹配。
 */