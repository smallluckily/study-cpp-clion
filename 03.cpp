//
// Created by orange on 2026/2/19.
//
#include <iostream>

int max(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}
int main() {
    int a, b;
    std::cout << "请输入两个数字：" << std::endl;
    std::cin >> a >> b;
    std::cout << "两个数字中的最大值为：" << max(a, b) << std::endl;
    return 0;
}

