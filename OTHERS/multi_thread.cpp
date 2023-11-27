//
//  main.cpp
//  multi_thread
//
//  Created by YaohuiLi on 2023/11/28.
//

#include <future>
#include <iostream>
#include <memory>
#include <thread>
#include <vector>

bool make_thread(int n)
{
    std::cout << "thread: " << n << " is running..." << std::endl;
    int a = 0;
    while (true)
    {

        if (a == 100)
        {
            a = 0;
        }
        ++a;
    }
    return true;
}

int main(int argc, const char *argv[])
{
    std::vector<std::thread> threads;
    for (int i = 0; i != 10; ++i)
    {
        threads.emplace_back(make_thread, i);
    }

    for (int i = 0; i != 10; ++i)
    {
        threads[i].join();
    }
    //    std::thread t1(make_thread, 1);
    //    t1.join();

    return 0;
}
