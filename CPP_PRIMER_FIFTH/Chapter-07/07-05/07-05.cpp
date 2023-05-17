//
// Created by Yaohui Li on 2021/2/18.
//

#include <string>

using std::string;

struct Person {
  // 成员函数
  string getName() const;

  string getAddress() const;

  // 数据成员
  std::string name;
  std::string address;
};

string Person::getName() const { return name; }

string Person::getAddress() const { return address; }

int main() {
  Person personOne;
  return 0;
}
/*
 * 这些方法应该是const的，因为只需要读取数据成员，不需要写入数据成员
 */
