/**
 * @file 04.cpp
 * @brief 数字倍数计算程序
 * @author orange
 * @date 2026/2/19
 * 
 * 本程序实现了接收用户输入整数并计算其两倍值的功能。
 * 通过函数封装提高了代码的可重用性和可维护性。
 */

#include <iostream>
#include <limits>  // 用于输入验证

using namespace std;

/**
 * @brief 计算整数的两倍值
 * 
 * @param x 输入的整数
 * @return int 返回输入值的两倍
 * 
 * @details 该函数接收一个整数参数，返回其乘以2的结果。
 *          实现简单但体现了函数封装的思想。
 */
int doubleNumber(int x) {
    return x * 2;
}

/**
 * @brief 主函数
 * 
 * @return int 程序退出状态码
 * 
 * @details 程序流程：
 *          1. 提示用户输入整数
 *          2. 验证输入有效性
 *          3. 调用doubleNumber函数计算结果
 *          4. 输出计算结果
 */
int main() {
    int x;  // 存储用户输入的整数
    
    // 提示用户输入
    cout << "请输入一个整数：";
    
    // 输入验证循环，确保获得有效整数输入
    while (!(cin >> x)) {
        // 清除错误标志
        cin.clear();
        // 忽略无效输入直到换行符
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "输入无效，请输入一个整数：";
    }
    
    // 调用函数计算两倍值
    int result = doubleNumber(x);
    
    // 输出结果
    cout << "该数的两倍是：" << result << endl;
    
    return 0;
}
    