//
// Created by Yaohui Li on 2021/2/19.
//
#include <string>

using std::string;

class Screen
{
  public:
    using pos = string::size_type;

    Screen() = default;

    Screen(pos ht, pos wt, char c) : height(ht), width(wt), contents(ht * wt, c)
    {
    }

    char get() const
    {
        return contents[cursor];
    }

    inline char get(pos r, pos c) const;

    Screen &move(pos r, pos c);

  private:
    pos cursor = 0;
    pos height = 0;
    pos width = 0;
    string contents;
};

// 在类外部定义时内联
inline Screen &Screen::move(pos r, pos c)
{
    cursor = r * width + c;
    return *this;
}

// 在类内部声明时内联
char Screen::get(pos r, pos c) const
{
    return contents[r * width + c];
}

int main()
{
    return 0;
}