/**
 * @file Window_mgr.h
 * @author yaohui.li (1210792617@qq.com)
 * @brief
 * @version 0.1
 * @date 2021-11-30
 *
 * @copyright Copyright (c) 2021
 *
 */

#ifndef YAOHUI_WINDOW_MGR_H
#define YAOHUI_WINDOW_MGR_H

#include <vector>

#include "Screen.h"

namespace yaohui
{

class Window_mgr
{
  public:
    using ScreenIndex = std::vector<Screen>::size_type;

    Window_mgr();
    ~Window_mgr();

  private:
    std::vector<Screen> screens_{Screen(24, 80, ' ')};

    void clear(ScreenIndex screen_index);
};

Window_mgr::Window_mgr(/* args */)
{
}

Window_mgr::~Window_mgr()
{
}

void Window_mgr::clear(ScreenIndex screen_index)
{
    Screen &s = screens_[screen_index];
    s.contents_ = std::string(s.width_ * s.height_, ' ');
}

} // namespace yaohui

#endif // YAOHUI_WINDOW_MGR_H