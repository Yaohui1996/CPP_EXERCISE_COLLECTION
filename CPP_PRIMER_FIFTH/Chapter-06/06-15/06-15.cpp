//
// Created by Yaohui Li on 2021/2/14.
//

int main()
{
    return 0;
}

/*
 * 因为不修改字符串s，所以为 const string & 类型
 * s可能很长，避免拷贝用引用类型
 * occurs相当于是第2个返回值，所以用引用类型
 * c可能是右值，不能用引用类型
 * 令s为普通引用可能会修改s
 * 如果occurs是常量引用，则不能修改它的值
 */
