//
// Created by Yaohui Li on 2021/2/20.
//

#include <fstream>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> readFile(const string &fileDir);

int main() {
  vector<string> haha =
      readFile("/Users/yaohui/Desktop/CPP_Primer_5th_Exercise/Chapter8/"
               "_08_06_books.txt");
  // 输出内容
  for (const string &item : haha) {
    cout << item << endl;
  }
  return 0;
}

vector<string> readFile(const string &fileDir) {
  vector<string> ret;
  ifstream in;
  in.open(fileDir, ios::in);
  if (in) {
    string line;
    while (getline(in, line)) {
      ret.push_back(line);
    }
  } else {
    cerr << "文件打开失败！" << endl;
  }
  in.close();
  return ret;
}