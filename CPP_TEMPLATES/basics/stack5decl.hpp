#include <deque>
#include <stdexcept>
template <typename T> class Stack
{
  private:
    std::deque<T> elems;

  public:
    void push(T const &);
    void pop();
    T top() const;
    bool empty() const;
    // 使用元素类型为T2的栈进行赋值
    template <typename T2> Stack<T> &operator=(Stack<T2> const &);
};

template <typename T> inline void Stack<T>::push(const T &e)
{
    this->elems.push_back(e);
}

template <typename T> inline void Stack<T>::pop()
{
    if (this->empty())
    {
        throw std::out_of_range("Stack<T>::pop(): empty stack");
    }
    this->elems.pop_back();
}

template <typename T> inline T Stack<T>::top() const
{
    if (this->empty())
    {
        throw std::out_of_range("Stack<T>::pop(): empty stack");
    }
    return this->elems.back();
}

template <typename T> inline bool Stack<T>::empty() const
{
    return this->elems.empty();
}