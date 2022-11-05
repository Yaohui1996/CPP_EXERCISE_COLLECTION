/**
 * @file 09-25.cpp
 * @author yaohui.li (1210792617@qq.com)
 * @brief
 * @version 0.1
 * @date 2021-12-01
 *
 * @copyright Copyright (c) 2021
 *
 */

// 练习9.25：对于第312页中删除一个范围内的元素的程序，如果elem1与elem2相等会发生什么？
// 如果elem2是尾后迭代器，或者elem1和elem2皆为尾后迭代器，又会发生什么？

#include <iostream>
#include <list>

using namespace std;

int main() {
  list<int> l{1, 2, 3, 4, 5};

  // 如果elem1与elem2相等会发生什么？
  // 如果相等，则不会删除任何元素
  list<int>::const_iterator elem1 = l.cbegin();
  list<int>::const_iterator elem2 = l.cbegin();
  l.erase(elem1, elem2);
  // print l
  for (int item : l)
    cout << item << " ";
  cout << *elem1 << " " << *elem2 << "\n";

  // 如果elem2是尾后迭代器：
  // 所有元素被删除

  elem1 = l.cbegin();
  elem2 = l.cend();
  l.erase(elem1, elem2);
  // print l
  for (int item : l)
    cout << item << " ";
  cout << "\n";

  // 或者elem1和elem2皆为尾后迭代器，又会发生什么？
  // 不会删除任何元素
  list<int> lll{1, 2, 3, 4, 5};
  list<int>::const_iterator e1 = lll.cend();
  list<int>::const_iterator e2 = lll.cend();
  lll.erase(e1, e2);
  for (int item : lll)
    cout << item << " ";

  return 0;
}
