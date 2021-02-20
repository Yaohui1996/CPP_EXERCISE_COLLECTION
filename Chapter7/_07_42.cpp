//
// Created by Yaohui Li on 2021/2/20.
//
#include <string>
#include <iostream>

using std::cout;
using std::endl;
using std::string;

class Book {
public:
    Book() = default;

    Book(string bn, string isbn, string pub, unsigned ye, double pr) : bookName(bn), ISBN(isbn), publisher(pub),
                                                                       year(ye), price(pr) {}

    Book(string bn) : Book(bn, "xxx12-32", "人民邮电出版社", 2019, 29.9) {}

    string selfInfo() {
        string info = "";
        info += "书名： " + bookName + " isbn： " + ISBN + " 出版社： " + publisher + " 年份： " + std::to_string(year) +
                " 价格： " + std::to_string(price);
        return info;
    }

private:
    string bookName;
    string ISBN;
    string publisher;
    unsigned year;
    double price;
};

int main() {
    Book mybook("测试");
    cout << mybook.selfInfo() << endl;
    return 0;
}