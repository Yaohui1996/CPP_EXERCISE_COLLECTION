#include <iostream>
#include <vector>

using namespace std;

int main() {

//    vector<int> v{2, 4, 8, 16, 32, -3, 64};
//    auto pbeg = v.begin();
//    while (pbeg != v.end() && *pbeg >= 0)
//        cout << *pbeg++ << endl;
    // ++ 优先级高于 * ，原表达式等价于：*(pbeg++)
    // 修改后，将输出自增后的值
    vector<int> v{2, 4, 8, 16, 32, -3, 64};
    auto pbeg = v.begin();
    while (pbeg != v.end() && *pbeg >= 0)
        cout << *++pbeg << endl;

    return 0;
}