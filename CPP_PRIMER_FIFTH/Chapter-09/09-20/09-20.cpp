//
// Created by Yaohui Li on 2021/2/22.
//

#include <deque>
#include <iostream>
#include <list>

using namespace std;

int main() {
  list<int> ls{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  deque<int> ji;
  deque<int> ou;
  for (const auto &i : ls)
    i % 2 == 0 ? ou.push_back(i) : ji.push_back(i);
  for (const auto &i : ji)
    cout << i << endl;
  for (const auto &i : ou)
    cout << i << endl;

  return 0;
}