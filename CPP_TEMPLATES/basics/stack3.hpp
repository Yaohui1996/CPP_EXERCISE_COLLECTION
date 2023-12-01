// basics/stack3.hpp
#include <stdexcept>
#include <vector>

template <typename T, typename CONT = std::vector<T>> class Stack
{
  private:
    CONT elems; // 包含元素的容器

  public:
    void push(T const &); // 压入元素
    void pop();           // 弹出元素
    T top() const;        // 返回栈顶元素
    bool empty() const
    { // 返回栈是否为空
        return elems.empty();
    }
};

template <typename T, typename CONT> inline void Stack<T, CONT>::push(T const &elem)
{
    elems.push_back(elem); // 把传入实参elem附加到末端
}

template <typename T, typename CONT> inline void Stack<T, CONT>::pop()
{
    if (elems.empty())
    {
        throw std::out_of_range("Stack<>::pop(): empty stack");
    }
    elems.pop_back(); // 删除末端元素
}

template <typename T, typename CONT> inline T Stack<T, CONT>::top() const
{
    if (elems.empty())
    {
        throw std::out_of_range("Stack<>::top(): empty stack");
    }
    return elems.back(); // 返回末端元素的拷贝
}