//
// Created by orange on 2026/2/24.
//
// #include <iostream>
// void doB()
// {
//     std::cout << "doB" << std::endl;
// }
//
// void doA()
// {
//     std::cout << "doA" << std::endl;
//     doB();
// }
// int main()
// {
//     std::cout << "main" << std::endl;
//     doA();
//     return 0;
// }
 //不支持函数在函数内定义
//函数的调用
#include <iostream>
int getValueFromUser()
{
    std::cout << "请输入一个数字：";
    int input{};
    std::cin >> input;
    return input;
}
int main()
{
    int x{getValueFromUser()};
    std::cout << "输入的数字是：" << x << std::endl;
    int y{getValueFromUser()};
    std::cout << "输入的数字是：" << y << std::endl;
    std::cout << "两个数字的和是：" << x + y << std::endl;
    std::cout << "两个数字的积是：" << x * y << std::endl;
    std::cout << "两个数字的差是：" << x - y << std::endl;
    return 0;
}