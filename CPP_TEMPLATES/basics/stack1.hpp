// push top pop empty

#include <stdexcept>
#include <vector>

template <typename T> class Stack
{
  private:
    std::vector<T> elems;

  public:
    Stack() = default;
    Stack(Stack<T> const &) = default;
    Stack(Stack<T> &&) = default;
    Stack<T> &operator=(Stack<T> const &) = default;
    Stack<T> &operator=(Stack<T> &&) = default;
    void push(T const &e);
    void pop();
    T const &top() const;
    bool empty() const;
};

template <typename T> inline void Stack<T>::push(T const &e)
{
    elems.push_back(e);
}

template <typename T> inline bool Stack<T>::empty() const
{
    return elems.empty();
}

template <typename T> inline void Stack<T>::pop()
{
    if (empty())
    {
        throw std::out_of_range("Stack<>::pop(): empty stack");
    }
    elems.pop_back();
}

template <typename T> inline T const &Stack<T>::top() const
{
    if (empty())
    {
        throw std::out_of_range("Stack<>::top(): empty stack");
    }
    return elems.back();
}
