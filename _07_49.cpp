//
// Created by Yaohui Li on 2021/2/20.
//

int main() { return 0; }

/*

(a) Sales_data &combine(Sales_data); //没有问题
(b) Sales_data &combine(Sales_data&); // 出错：无法将参数 1 从“std::string”转换为“Sales_data &”	因为隐式转换只有一次
(c) Sales_data &combine(const Sales_data&) const; // 该成员函数是const 的，意味着不能改变对象。而 combine函数的本意就是要改变对象

 */