#include <iostream>
#include <string>


using namespace std;

int main() {
    char a[] = {'h', 'e', 'l', 'l', 'o', ',', '\0'};
    char b[] = {'w', 'o', 'r', 'l', 'd', '.', '\0'};

    char c[strlen(a) + strlen(b)];
    strcpy(c, strcat(a, b));

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;


    return 0;
}