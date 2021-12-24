/**
 * @file 09-44.cpp
 * @author yaohui.li (1210792617@qq.com)
 * @brief
 * @version 0.1
 * @date 2021-12-21
 *
 * @copyright Copyright (c) 2021
 *
 */

// 练习9.44：重写上一题的函数，这次使用一个下标和replace。

#include <iostream>
#include <string>

using namespace std;

string yh_replace(string s, string oldVal, string newVal) {
    string::size_type i = 0;
    while (i != s.size()) {
        if (s[i] == oldVal[0]) {  // 若第一个字符能匹配上
            bool can_match = true;
            for (string::size_type i1 = i, i2 = 0;
                 i1 != s.size() && i2 != oldVal.size(); ++i1, ++i2) {
                if (s[i1] != oldVal[i2]) {
                    can_match = false;
                    break;
                }
            }

            if (can_match) {
                s = s.replace(i, oldVal.size(), newVal);
                i += newVal.size();
            } else {
                ++i;
            }
        }
        ++i;
    }
    return s;
}

int main() {
    string s = "hello tho tho thru tho hhhh";
    cout << s << endl;
    s = yh_replace(s, "tho", "though");
    s = yh_replace(s, "thru", "through");
    cout << s << endl;
}
