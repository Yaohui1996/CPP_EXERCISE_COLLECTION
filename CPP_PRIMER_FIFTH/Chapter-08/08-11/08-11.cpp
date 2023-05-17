//
// Created by Yaohui Li on 2021/2/20.
//

/*
//修改前
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

struct PersonInfo {
    string name;
    vector<string> phones;
};

int main() {
    string line, word;
    vector<PersonInfo> people;

    while (getline(cin, line)) {
        PersonInfo info;
        istringstream record(line);
        record >> info.name;
        while (record >> word) {
            info.phones.push_back(word);
        }
        people.push_back(info);
    }
    for (const auto &i : people) {
        cout << i.name << endl;
        for (const auto &j : i.phones)
            cout << j << endl;
    }

    return 0;
}

 */

// 修改后
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

struct PersonInfo {
  string name;
  vector<string> phones;
};

int main() {
  string line, word;
  vector<PersonInfo> people;

  istringstream record;
  while (getline(cin, line)) {
    PersonInfo info;
    record.clear(); // 重复使用字符串流时，要调用clear()
    record.str(line);
    record >> info.name;
    while (record >> word) {
      info.phones.push_back(word);
    }
    people.push_back(info);
  }
  for (const auto &i : people) {
    cout << i.name << endl;
    for (const auto &j : i.phones)
      cout << j << endl;
  }

  return 0;
}