//
// Created by Yaohui Li on 2021/2/19.
//

int main() { return 0; }

/*
 * Screen的成员只有内置类型和string，因此能安全地依赖于拷贝和赋值操作的默认版本
 * 管理动态内存的类则不能依赖于拷贝和赋值操作的默认版本，而且也应该尽量使用string和vector来避免动态管理内存的复杂性
 */