// 练习13.2：解释为什么下面的声明是非法的：
// Sales_data::Sales_data(Sales_data rhs);
// 解答:
// 为了调用拷贝构造函数，必须拷贝它的实参
// 但是为了拷贝它的实参，必须调用拷贝构造函数
// 陷入循环......

int main() { return 0; }