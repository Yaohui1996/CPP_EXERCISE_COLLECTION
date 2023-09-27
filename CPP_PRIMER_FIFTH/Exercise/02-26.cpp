// 练习2.26：下面哪些句子是合法的？如果有不合法的句子，请说明为什么？
// (a) const int buf;
// (b) int cnt = 0;
// (c) const int sz = cnt;
// (d) ++cnt, ++sz;

#include <iostream>

int main()
{
    // (a) const int buf;
    std::cout << "(a) const int buf;" << std::endl;
    std::cout << "不合法, 因为没有初始化const" << std::endl;
    // (b) int cnt = 0;
    std::cout << "(b) int cnt = 0;" << std::endl;
    std::cout << "合法" << std::endl;
    int cnt = 0;
    // (c) const int sz = cnt;
    std::cout << "(c) const int sz = cnt;" << std::endl;
    std::cout << "合法" << std::endl;
    const int sz = cnt;
    // (d) ++cnt, ++sz;
    std::cout << "(d) ++cnt, ++sz;" << std::endl;
    std::cout << "++cnt合法" << std::endl;
    std::cout << "++sz不合法, 因为sz是const" << std::endl;
    ++cnt;
    return 0;
}
