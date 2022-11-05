#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  vector<vector<int>> ivec;
  // vector<string> svec = ivec; //不正确，元素类型不对
  vector<string> svec(10, "null");

  return 0;
}