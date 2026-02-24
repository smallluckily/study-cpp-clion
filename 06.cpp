//
// Created by orange on 2026/2/24.
// 简单计算器程序
//
#include <iostream>
#include <limits>

// 获取用户输入的函数
int getUserInput()
{
    std::cout << "Enter an integer: ";
    int input{};
    
    // 输入验证
    while (!(std::cin >> input))
    {
        std::cin.clear(); // 清除错误标志
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // 忽略无效输入
        std::cout << "Invalid input. Please enter an integer: ";
    }
    
    return input;
}

// 获取数学运算符的函数
char getMathematicalOperation()
{
    std::cout << "Enter an operator (+, -, *, /): ";
    char op{};
    
    // 输入验证
    while (!(std::cin >> op) || (op != '+' && op != '-' && op != '*' && op != '/'))
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Invalid operator. Please enter +, -, *, or /: ";
    }
    
    return op;
}

// 计算结果的函数
double calculateResult(int num1, char op, int num2)
{
    switch (op)
    {
        case '+':
            return static_cast<double>(num1 + num2);
        case '-':
            return static_cast<double>(num1 - num2);
        case '*':
            return static_cast<double>(num1 * num2);
        case '/':
            if (num2 != 0)
            {
                return static_cast<double>(num1) / num2;
            }
            else
            {
                std::cout << "Error: Division by zero!\n";
                return 0.0;
            }
        default:
            std::cout << "Error: Invalid operator!\n";
            return 0.0;
    }
}

// 打印结果的函数
void printResult(double result)
{
    std::cout << "Result: " << result << std::endl;
}

int main()
{
    std::cout << "=== Simple Calculator ===" << std::endl;
    
    // 从用户获取第一个输入数字
    int firstNumber{ getUserInput() };
    std::cout << "First number: " << firstNumber << std::endl; // 调试输出

    // 从用户处获取数学运算符
    char operation{ getMathematicalOperation() };
    std::cout << "Operator: " << operation << std::endl; // 调试输出

    // 从用户处获取第二个数字
    int secondNumber{ getUserInput() };
    std::cout << "Second number: " << secondNumber << std::endl; // 调试输出

    // 计算结果
    double result{ calculateResult(firstNumber, operation, secondNumber) };

    // 打印结果
    printResult(result);

    return 0;
}

