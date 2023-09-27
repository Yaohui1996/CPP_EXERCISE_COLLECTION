//
// Created by Yaohui Li on 2021/2/20.
//

#include <iostream>
#include <string>

using std::cerr;
using std::cin;
using std::cout;
using std::endl;
using std::istream;
using std::ostream;
using std::string;

struct Person
{
    // 友元声明
    friend istream &readInfo(istream &is, Person &item);

    friend ostream &printInfo(ostream &os, const Person &item);

  public:
    // 构造函数
    Person() = default;

    Person(const string &n, const string a) : name(n), address(a)
    {
    }

    explicit Person(const string &n) : name(n)
    {
    }

    explicit Person(const string a) : address(a)
    {
    }

    // 成员函数
    string getName() const;

    string getAddress() const;

  private:
    // 数据成员
    std::string name;
    std::string address;
};

string Person::getName() const
{
    return name;
}

string Person::getAddress() const
{
    return address;
}

// 非成员函数声明和定义
istream &readInfo(istream &is, Person &item)
{
    is >> item.name >> item.address;
    return is;
}

ostream &printInfo(ostream &os, const Person &item)
{
    os << item.name << " " << item.address;
    return os;
}

int main()
{
    Person personOne;
    if (readInfo(cin, personOne))
    {
        printInfo(cout, personOne) << endl;
    }
    return 0;
}