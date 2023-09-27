#include <iostream>
#include <thread>

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
            std::cout << var_ << std::endl;
        }
    }
};

void f()
{
    int some_local_state = 0;
    func my_func(some_local_state);
    std::thread t(my_func);
    try
    {
        std::cout << "do something in current thread..." << std::endl;
    }
    catch (...)
    {
        t.join();
        throw;
    }
    t.join();
}

int main()
{
    f();
    return 0;
}