// 练习2.6：下面两组定义是否有区别，如果有，请叙述之：
// int month = 9, day = 7;
// int month = 09, day = 07;

int main() {
  int month = 9, day = 7;
  // int month = 09, day = 07;
  // 错误语法，八进制不能有数字"9"
  return 0;
}