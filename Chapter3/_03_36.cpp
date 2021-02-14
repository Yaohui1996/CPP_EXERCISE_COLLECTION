#include <iostream>
#include <vector>

using namespace std;

int main() {

    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int b[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int *pa = &a[0];
    int *pae = &a[10];

    int *pb = &b[0];
    int *pbe = &b[10];


    while ((pa != pae) && (pb != pbe)) {
        if (*pa == *pb) {
            ++pa;
            ++pb;
        } else {
            cout << "不相等" << endl;
            break;
        }
    }

    vector<int> v1(10, 2);
    vector<int> v2(10, 2);
    if (v1 == v2) {
        cout << "相等" << endl;
    }


    return 0;
}