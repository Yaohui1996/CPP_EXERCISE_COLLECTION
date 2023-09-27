#ifndef STRBLOB_H
#define STRBLOB_H

#include <iostream>
#include <memory>
#include <string>
#include <vector>

class StrBlob
{

  public:
    typedef std::vector<std::string>::size_type size_type;
    StrBlob();
    StrBlob(std::initializer_list<std::string> il);
    size_type size() const;
    // 添加或删除元素
    void push_back(const std::string &t);
    void pop_back();
    void push_back(const std::string &t) const;
    void pop_back() const;
    // 元素访问
    std::string &front();
    std::string &back();
    const std::string &front() const;
    const std::string &back() const;
    // 打印元素
    void show() const;

  private:
    std::shared_ptr<std::vector<std::string>> data;
    void check(size_type i, const std::string &msg) const;
};

StrBlob::StrBlob() : data(std::make_shared<std::vector<std::string>>())
{
}
StrBlob::StrBlob(std::initializer_list<std::string> il) : data(std::make_shared<std::vector<std::string>>(il))
{
}

void StrBlob::check(size_type i, const std::string &msg) const
{
    if (i >= data->size())
    {
        throw std::out_of_range(msg);
    }
}

StrBlob::size_type StrBlob::size() const
{
    return data->size();
}

void StrBlob::push_back(const std::string &t)
{
    data->push_back(t);
}

void StrBlob::pop_back()
{
    check(0, "pop_back on empty StrBlob");
    data->pop_back();
}

void StrBlob::push_back(const std::string &t) const
{
    data->push_back(t);
}

void StrBlob::pop_back() const
{
    check(0, "pop_back on empty StrBlob");
    data->pop_back();
}

std::string &StrBlob::front()
{
    check(0, "front on empty StrBlob");
    return data->front();
}

std::string &StrBlob::back()
{
    check(0, "back on empty StrBlob");
    return data->back();
}

const std::string &StrBlob::front() const
{
    check(0, "front on empty StrBlob");
    return data->front();
}

const std::string &StrBlob::back() const
{
    check(0, "back on empty StrBlob");
    return data->back();
}

void StrBlob::show() const
{
    for (size_t i = 0; i != data->size(); ++i)
    {
        std::cout << data->at(i);
        if (i != data->size() - 1)
        {
            std::cout << ", ";
        }
        else
        {
            std::cout << std::endl;
        }
    }
}

#endif
