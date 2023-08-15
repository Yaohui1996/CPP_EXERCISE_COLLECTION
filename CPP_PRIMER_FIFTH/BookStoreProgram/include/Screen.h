/**
 * @file Screen.h
 * @author yaohui.li (1210792617@qq.com)
 * @brief
 * @version 0.1
 * @date 2021-11-30
 *
 * @copyright Copyright (c) 2021
 *
 */

#ifndef YAOHUI_SCREEN_H
#define YAOHUI_SCREEN_H

#include <ostream>
#include <string>

namespace yaohui {

class Screen {
  friend class Window_mgr;
  // friend void Window_mgr::clear(std::vector<Screen>::size_type
  // screen_index);

public:
  typedef std::string::size_type pos;
  Screen() = default;
  Screen(pos ht, pos wd);
  Screen(pos ht, pos wd, char c);
  ~Screen();

public:
  char get() const;
  char get(pos r, pos c) const;
  Screen &move(pos r, pos c);

  Screen &set(char ch);
  Screen &set(pos r, pos c, char ch);

  Screen &display(std::ostream &os);
  const Screen &display(std::ostream &os) const;

private:
  pos cursor_ = 0;
  pos height_ = 0;
  pos width_ = 0;
  std::string contents_;

  void do_display(std::ostream &os) const;
};

Screen::Screen(pos ht, pos wd)
    : height_(ht), width_(wd), contents_(ht * wd, ' ') {}

Screen::Screen(pos ht, pos wd, char c)
    : height_(ht), width_(wd), contents_(ht * wd, c) {}

Screen::~Screen() {}

char Screen::get() const { return contents_[cursor_]; }
char Screen::get(pos r, pos c) const {
  pos row = r * width_;
  return contents_[row + c];
}

Screen &Screen::move(pos r, pos c) {
  pos row = r * width_;
  cursor_ = row + c;
  return *this;
}

Screen &Screen::set(char c) {
  contents_[cursor_] = c;
  return *this;
}
Screen &Screen::set(pos r, pos c, char ch) {
  contents_[r * width_ + c] = ch;
  return *this;
}

Screen &Screen::display(std::ostream &os) {
  do_display(os);
  return *this;
}
const Screen &Screen::display(std::ostream &os) const {
  do_display(os);
  return *this;
}
void Screen::do_display(std::ostream &os) const { os << contents_; }

} // namespace yaohui

#endif // YAOHUI_SCREEN_H