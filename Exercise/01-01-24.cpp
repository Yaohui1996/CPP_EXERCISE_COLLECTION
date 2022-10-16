// 练习1.24：输入表示多个ISBN的多条销售记录来测试上一个程序，每个ISBN的记录应该聚在一起。

#include <iostream>

#include "Sales_item.h"
using std::cin;
using std::cout;
using std::endl;
int main() {
    Sales_item nowBook;
    cin >> nowBook;
    int counter = 1;
    cout << "书籍： " << nowBook.isbn() << " 有" << counter << " 条销售记录" << endl;
    Sales_item newBook;
    while (cin >> newBook) {
        if (newBook.isbn() == nowBook.isbn()) {
            ++counter;
        } else {
            nowBook = newBook;
            counter = 1;
        }
        cout << "书籍： " << nowBook.isbn() << " 有" << counter << " 条销售记录" << endl;
    }
    return 0;
}

// input:
// book1: 0-201-78345-x 3 20.00
// book2: 0-201-78345-x 2 25.00
// book3: 0-201-78345-y 10 30.00
// book4: 0-201-78345-y 1 10.00
