//
// Created by Yaohui Li on 2021/2/14.
//

int calc(int, int);

//int calc(const int, const int);//非法，顶层const不影响传入函数的对象

int get();

//double get();//返回值与重载无关

int *reset(int *);

double *reset(double *);

int main(int argc, char *argv[])
{
    return 0;
}