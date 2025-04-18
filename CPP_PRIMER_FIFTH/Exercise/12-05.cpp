// 练习12.5：我们未编写接受一个initializer_list
// explicit（参见7.5.4节，第264页）参数的构造函数。讨论这个设计策略的优点和缺点。
// 解答(从习题解抄来的):
// 未编写接受一个初始化列表参数的显式构造函数，意味着可以进行列表向StrBlob的隐式类型转换，
// 亦即在需要StrBlob的地方（如函数的参数），可以使用列表进行替代。
// 而且，可以进行拷贝形式的初始化（如赋值）。这令程序编写更为简单方便。
// 但这种隐式转换并不总是好的。例如，列表中可能并非都是合法的值。
// 再如，对于接受StrBlob的函数，传递给它一个列表，会创建一个临时的StrBlob对象，
// 用列表对其初始化，然后将其传递给函数，当函数完成后，此对象将被丢弃，再也无法访问了。
// 对于这些情况，我们可以定义显式的构造函数，禁止隐式类类型转换。

#include "StrBlob.h"
#include <initializer_list>
#include <iostream>

int main()
{
    // 比如:
    StrBlob tmp_sb = {"a", "an", "the"};
    // 若添加explicit, 则报错
    tmp_sb.show();
    return 0;
}