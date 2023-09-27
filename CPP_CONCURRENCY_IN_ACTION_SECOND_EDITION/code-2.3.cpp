#include <iostream>
#include <thread>

class thread_guard
{
  private:
    std::thread &t;

  public:
    explicit thread_guard(std::thread &t_) : t(t_)
    {
    }
    ~thread_guard()
    {
        if (t.joinable())
        {
            t.join();
        }
    }
    thread_guard(thread_guard const &) = delete;
    thread_guard &operator=(thread_guard const &) = delete;
};

struct func
{
    int &var_;
    func(int &v) : var_(v)
    {
    }
    void operator()()
    {
        for (std::size_t i = 0; i != 10000; ++i)
        {
            std::cout << "[new thread] " << var_ << std::endl;
        }
    }
};

void f()
{
    int some_local_state = 0;
    func my_func(some_local_state);
    std::thread t(my_func);
    thread_guard g(t);
    //* do something in current thread...
    std::cout << "do something in current thread..." << std::endl;
    for (std::size_t i = 0; i != 10000; ++i)
    {
        std::cout << "[main thread] " << i << std::endl;
    }
}

int main()
{
    f();
    return 0;
}