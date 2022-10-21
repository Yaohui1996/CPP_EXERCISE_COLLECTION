// 练习1.20：在网站http://www.informit.com/title/0321714113上，第1章的代码目录中包含了头文件Sales_item.h。将它拷贝到你自己的工作目录中。用它编写一个程序，读取一组书籍销售记录，将每条记录打印到标准输出上。

#include <iostream>
#include "Sales_item.h"

int main() {
  Sales_item book;
  while (std::cin >> book) {
    std::cout << book << std::endl;
  }
  return 0;
}
// input: 0-201-70353-x 4 24.99
