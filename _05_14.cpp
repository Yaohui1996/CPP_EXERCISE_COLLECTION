#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    vector<string> vecs;
    string s;
    while (cin >> s && s != "stop") {
        vecs.push_back(s);
    }

    bool appear = false;
    unsigned int counter = 1;
    for (auto it = vecs.cbegin(); it != vecs.cend() - 1; ++it) {
        if (*it == *(it + 1)) {
            ++counter;
            appear = true;
        } else {
            if (counter > 1) {
                cout << "单词 " << *it << " 重复出现了 " << counter << " 次" << endl;
                counter = 1;
            }
        }
    }
    if (counter > 1)
        cout << "单词 " << *(vecs.end() - 1) << " 重复出现了 " << counter << " 次" << endl;
    if (appear == false)
        cout << "没有任何单词连续出现过" << endl;

    return 0;
}