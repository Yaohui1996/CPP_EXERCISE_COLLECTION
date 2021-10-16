#include "Chapter1.h"

#include <iostream>

Chapter1::Chapter1() {}

Chapter1::~Chapter1() {}

bool Chapter1::run_all_exercise() {
    exercise_01();
    exercise_02();
    exercise_03();
    exercise_04();
    exercise_05();
    exercise_06();
    exercise_07();
    exercise_08();
    exercise_09();
    exercise_10();
    exercise_11();
    exercise_12();
    return true;
}

int Chapter1::exercise_01() { return 0; }

int Chapter1::exercise_02() { return -1; }

int Chapter1::exercise_03() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

int Chapter1::exercise_04() {
    std::cout << "4 + 2 = " << 4 + 2 << " 4 * 2 = " << 4 * 2 << std::endl;
    return 0;
}

int Chapter1::exercise_05() {
    std::cout << "4 + 2 = " << 4 + 2 << std::endl;
    std::cout << "4 * 2 = " << 4 * 2 << std::endl;
    return 0;
}

int Chapter1::exercise_06() {
    int v1 = 3;
    int v2 = 9;
    std::cout << "The sum of " << v1 << " and " << v2 << " is " << v1 + v2
              << std::endl;
    return 0;
    // 原代码不合法
    // 不合法的原因在于分号
    // 删除分号即合法
}

int Chapter1::exercise_07() {
    std::cout << "消除注释即可展示一个不正确的注释" << std::endl;
    return 0;
    // /* /* */  */
    // 上面一行是一个不正确的注释
}

int Chapter1::exercise_08() {
    std::cout << "/*";  //合法
    std::cout << "*/";  //合法
    // std::cout<</* "*/" */;           // 不合法
    std::cout << /* "*/ " */";          // 改正后合法
    std::cout << /* "*/ " /* " /*" */;  // 合法
    return 0;
}

int Chapter1::exercise_09() {
    int sum = 0;
    int counter = 50;
    while (counter <= 100) {
        sum += counter;
        ++counter;
    }
    std::cout << "The sum from 50 to 100 is " << sum << std::endl;
    return 0;
}

int Chapter1::exercise_10() {
    int counter = 10;
    while (counter >= 0) {
        std::cout << counter << std::endl;
        --counter;
    }
    return 0;
}

int Chapter1::exercise_11() {
    int beginNum;
    int endNum;
    // std::cout << "请输入起始整数：" << std::endl;
    // std::cin >> beginNum;
    // std::cout << "请输入终止整数：" << std::endl;
    // std::cin >> endNum;

    // 姑且假设一个值
    beginNum = 10;
    endNum = 15;

    if (beginNum == endNum) {
        std::cout << beginNum << std::endl;
    } else if (beginNum > endNum) {
        while (beginNum >= endNum) {
            std::cout << beginNum << std::endl;
            --beginNum;
        }
    } else if (beginNum < endNum) {
        while (beginNum <= endNum) {
            std::cout << beginNum << std::endl;
            ++beginNum;
        }
    }
    return 0;
}

int Chapter1::exercise_12() {
    int sum = 0;
    for (int i = -100; i <= 100; ++i) {
        sum += i;
    }
    std::cout << sum << std::endl;
    return 0;
    // 对从 -100 到 100 的整数求和
    // sum最终等于0
}
