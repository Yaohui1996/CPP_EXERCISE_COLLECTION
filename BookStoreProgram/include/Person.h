/**
 * @file Person.h
 * @author yaohui.li (1210792617@qq.com)
 * @brief
 * @version 0.1
 * @date 2021-11-30
 *
 * @copyright Copyright (c) 2021
 *
 */

#ifndef YAOHUI_PERSON_H
#define YAOHUI_PERSON_H

#include <iostream>
#include <string>

namespace yaohui {
class Person {
    friend std::istream& read(Person& p, std::istream& is);
    friend std::ostream& print(const Person& p, std::ostream& os);

private:
    std::string name_;
    std::string address_;

public:
    Person();
    Person(const std::string& n, const std::string& a);
    ~Person() = default;

public:
    std::string name() const;
    std::string address() const;

private:
};

std::istream& read(Person& p, std::istream& is);
std::ostream& print(const Person& p, std::ostream& os);

std::string Person::name() const { return this->name_; }
std::string Person::address() const { return this->address_; }

std::istream& read(Person& p, std::istream& is) {
    is >> p.name_ >> p.address_;
    return is;
}

std::ostream& print(const Person& p, std::ostream& os) {
    os << p.name_ << " " << p.address_;
    return os;
}

Person::Person() : name_(""), address_("") {}
Person::Person(const std::string& n, const std::string& a)
    : name_(n), address_(a) {}

}  // namespace yaohui

#endif  // YAOHUI_PERSON_H