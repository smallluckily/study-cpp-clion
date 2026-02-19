/**
 * @file 01.cpp
 * @brief 程序入口点示例
 * @author orange
 * @date 2026/2/19
 * @version 1.0.0
 *
 * @section DESCRIPTION
 * 这是一个简单的C++程序示例，用于演示基本的控制台输出功能。
 * 程序会输出英文和中文的问候语到控制台。
 *
 * @section HISTORY
 * 2026/2/19 - v1.0.0 - 初始版本创建
 */
#include <iostream>
#include <string>

/**
 * @brief 程序主函数
 * 
 * @details 该函数是程序的入口点，负责执行主要的业务逻辑。
 * 包括输出欢迎信息和中英文问候语。
 * 
 * @return int 返回程序执行状态
 * @retval 0 程序正常退出
 * @retval 非0 程序异常退出
 */
int main() {
    // 输出英文问候语
    std::cout << "Hello, World!" << std::endl;
    
    // 输出中文问候语
    std::cout << "你好, 世界!" << std::endl;
    // 程序正常结束
    return 0;
}