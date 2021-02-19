//
// Created by Yaohui Li on 2021/2/19.
//

#include <string>
#include <iostream>
#include <vector>

using std::vector;
using std::ostream;
using std::string;
using std::cout;

class Screen;

class Window_mgr {
public:
    using ScreenIndex = vector<Screen>::size_type;

    void clear(ScreenIndex i);

private:
    vector<Screen> screens;
};


class Screen {
    friend void Window_mgr::clear(ScreenIndex i);

public:
    using pos = string::size_type;

    Screen() = default;

    Screen(pos ht, pos wt) : height(ht), width(wt), contents(ht * wt, ' ') {}

    Screen(pos ht, pos wt, char c) : height(ht), width(wt), contents(ht * wt, c) {}

    char get() const { return contents[cursor]; }

    char get(pos r, pos c) const;

    Screen &move(pos r, pos c);

    Screen &set(pos row, pos col, char c);

    Screen &set(char c);

    Screen &display(ostream &os);

    const Screen &display(ostream &os) const;

    pos size() const {
        return height * width;
    }

private:

    pos cursor = 0;
    pos height = 0;
    pos width = 0;
    string contents;

    void do_display(ostream &os) const { os << contents; }


};

//在类外部定义时内联
inline Screen &Screen::move(pos r, pos c) {
    cursor = r * width + c;
    return *this;
}

//在类内部声明时内联
inline char Screen::get(pos r, pos c) const {
    return contents[r * width + c];
}

inline Screen &Screen::set(pos row, pos col, char c) {
    contents[row * width + col] = c;
    return *this;
}

inline Screen &Screen::set(char c) {
    contents[cursor] = c;
    return *this;
}

inline Screen &Screen::display(ostream &os) {
    do_display(os);
    return *this;
}

inline const Screen &Screen::display(ostream &os) const {
    do_display(os);
    return *this;
}

void Window_mgr::clear(ScreenIndex i) {
    Screen &s = screens[i];
    s.contents = string(s.height * s.width, ' ');
}

int main() {
    Screen myScreen(5, 5, 'X');
    myScreen.move(4, 0).set('#').display(cout);
    cout << "\n";
    myScreen.display(cout);
    cout << "\n";
    return 0;
}
