// 练习12.3：StrBlob需要const版本的push_back和pop_back吗？如果需要，添加进去。否则，解释为什么不需要。
// 解答:
// 需要, 因为不管是push_back还是pop_back都是对data指向的对象进行操作,
// data本身并未改变
#include "StrBlob.h"
#include <iostream>

int main() {
  std::cout << "见StrBlog.h" << std::endl;
  return 0;
}
