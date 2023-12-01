#include "stack6decl.hpp"
template <typename T, typename CONT>
template <typename T2, typename CONT2>
Stack<T, CONT> &Stack<T, CONT>::operator=(const Stack<T2, CONT2> &op2)
{
    if ((void *)this == (void *)&op2)
    {
        return *this;
    }
    Stack<T2, CONT2> tmp(op2);
    this->elems.clear();
    while (!tmp.empty())
    {
        this->elems.push_front(tmp.top());
        tmp.pop();
    }
    return *this;
}
