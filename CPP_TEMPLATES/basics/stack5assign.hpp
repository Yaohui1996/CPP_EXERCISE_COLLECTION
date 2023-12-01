#include "stack5decl.hpp"
template <typename T> template <typename T2> Stack<T> &Stack<T>::operator=(Stack<T2> const &op2)
{
    if ((void *)this == (void *)&op2)
    {
        return *this;
    }
    Stack<T2> tmp(op2);
    this->elems.clear();
    while (!tmp.empty())
    {
        this->elems.push_back(tmp.top());
        tmp.pop();
    }
    return *this;
}