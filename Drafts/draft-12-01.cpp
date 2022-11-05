#include <iostream>
#include <list>
#include <memory>
#include <string>
#include <vector>

class StrBlob {

public:
  typedef std::vector<std::string>::size_type size_type;
  StrBlob();
  StrBlob(std::initializer_list<std::string> il) : data(std::make_shared<std::vector<std::string>>(il)) {}
  size_type size() const { return data->size(); }
  // 添加或删除元素
  void push_back(const std::string &t) { data->push_back(t); }
  void pop_back();
  // 元素访问
  std::string &front();
  std::string &back();
  const std::string &front() const;
  const std::string &back() const;

private:
  std::shared_ptr<std::vector<std::string>> data;
  void check(size_type i, const std::string &msg) const;
};

void StrBlob::check(size_type i, const std::string &msg) const {
  if (i >= data->size()) {
    throw std::out_of_range(msg);
  }
}

void StrBlob::pop_back() {
  check(0, "pop_back on empty StrBlob");
  data->pop_back();
}

std::string &StrBlob::front() {
  check(0, "front on empty StrBlob");
  return data->front();
}

std::string &StrBlob::back() {
  check(0, "back on empty StrBlob");
  return data->back();
}

const std::string &StrBlob::front() const {
  check(0, "front on empty StrBlob");
  return data->front();
}

const std::string &StrBlob::back() const {
  check(0, "back on empty StrBlob");
  return data->back();
}

int main() {
  std::string s = "";
  std::shared_ptr<std::string> p1 = std::make_shared<std::string>(s);
  std::cout << *p1 << std::endl;
  if (p1 && p1->empty()) {
    *p1 = "hi";
  }
  std::cout << *p1 << std::endl;

  // std::shared_ptr<std::list<int>> p2;
  std::shared_ptr<int> p3 = std::make_shared<int>(42);
  std::cout << *p3 << std::endl;

  std::shared_ptr<std::string> p4 = std::make_shared<std::string>(10, '9');
  std::cout << *p4 << std::endl;

  std::shared_ptr<int> p5 = std::make_shared<int>();
  std::cout << *p5 << std::endl;

  auto p6 = std::make_shared<std::vector<std::string>>();

  auto p = std::make_shared<int>(42);
  std::cout << "p.use_count(): " << p.use_count() << std::endl;
  auto q(p);
  std::cout << "p.use_count(): " << p.use_count() << std::endl;
  std::cout << "p: " << *p << std::endl;
  std::cout << "q: " << *p << std::endl;
  auto r = std::make_shared<int>(42);
  std::cout << "r.use_count(): " << r.use_count() << std::endl;
  r = q;
  std::cout << "p.use_count(): " << p.use_count() << std::endl;
  std::cout << "r.use_count(): " << r.use_count() << std::endl;

  return 0;
}
