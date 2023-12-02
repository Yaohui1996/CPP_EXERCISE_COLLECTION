//
//  main.cpp
//  multi_thread
//
//  Created by YaohuiLi on 2023/11/28.
//

#include <future>
#include <iostream>
#include <memory>
#include <string>
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
    const int thread_cnt = std::stoi(argv[1]);
    std::cout << "thread cnt: " << thread_cnt << std::endl;
    std::vector<std::thread> threads;
    for (int i = 0; i != thread_cnt; ++i)
    {
        threads.emplace_back(make_thread, i);
    }

    for (int i = 0; i != thread_cnt; ++i)
    {
        threads[i].join();
    }
    //    std::thread t1(make_thread, 1);
    //    t1.join();

    return 0;
}
