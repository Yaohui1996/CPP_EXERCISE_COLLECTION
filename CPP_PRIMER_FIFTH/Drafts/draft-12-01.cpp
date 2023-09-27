#include "StrBlob.h"
#include <iostream>
#include <list>
#include <memory>
#include <string>
#include <vector>

int main()
{
    std::string s = "";
    std::shared_ptr<std::string> p1 = std::make_shared<std::string>(s);
    std::cout << *p1 << std::endl;
    if (p1 && p1->empty())
    {
        *p1 = "hi";
    }
    std::cout << *p1 << std::endl;

    // std::shared_ptr<std::list<int>> p2;
    std::shared_ptr<int> p3 = std::make_shared<int>(42);
    std::cout << *p3 << std::endl;

    std::shared_ptr<std::string> p4 = std::make_shared<std::string>(10, '9');
    std::cout << *p4 << std::endl;

    std::shared_ptr<int> p5 = std::make_shared<int>();
    std::cout << *p5 << std::endl;

    auto p6 = std::make_shared<std::vector<std::string>>();

    auto p = std::make_shared<int>(42);
    std::cout << "p.use_count(): " << p.use_count() << std::endl;
    auto q(p);
    std::cout << "p.use_count(): " << p.use_count() << std::endl;
    std::cout << "p: " << *p << std::endl;
    std::cout << "q: " << *p << std::endl;
    auto r = std::make_shared<int>(42);
    std::cout << "r.use_count(): " << r.use_count() << std::endl;
    r = q;
    std::cout << "p.use_count(): " << p.use_count() << std::endl;
    std::cout << "r.use_count(): " << r.use_count() << std::endl;

    return 0;
}
