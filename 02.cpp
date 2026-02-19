//
// Created by orange on 2026/2/19.
//
#include <iostream>
#include <string>
using namespace std;

// 1. 定义枚举：公司员工职位（手动指定数值，更贴合实际业务）
enum Position {
    Intern = 1,        // 实习生，编号1
    JuniorDev = 2,     // 初级工程师，编号2
    MiddleDev = 3,     // 中级工程师，编号3
    SeniorDev = 4      // 高级工程师，编号4
};

// 2. 辅助函数：根据枚举值返回对应的职位名称（方便输出）
string getPositionName(Position pos) {
    switch (pos) {
    case Intern:
        return "实习生";
    case JuniorDev:
        return "初级工程师";
    case MiddleDev:
        return "中级工程师";
    case SeniorDev:
        return "高级工程师";
    default:
        return "未知职位"; // 防错：处理非法值
    }
}

// 3. 业务函数：根据职位计算基础薪资（枚举的实际业务应用）
int calculateBaseSalary(Position pos) {
    switch (pos) {
    case Intern:
        return 4000;   // 实习生薪资
    case JuniorDev:
        return 8000;   // 初级工程师薪资
    case MiddleDev:
        return 15000;  // 中级工程师薪资
    case SeniorDev:
        return 25000;  // 高级工程师薪资
    default:
        return 0;
    }
}

int main() {
    // 4. 定义枚举变量并赋值
    Position employee1 = JuniorDev;  // 员工1：初级工程师
    Position employee2 = SeniorDev;  // 员工2：高级工程师

    // 5. 使用枚举变量进行业务逻辑处理
    cout << "员工1职位：" << getPositionName(employee1)
         << "，基础薪资：" << calculateBaseSalary(employee1) << "元" << endl;

    cout << "员工2职位：" << getPositionName(employee2)
         << "，基础薪资：" << calculateBaseSalary(employee2) << "元" << endl;

    // 6. 直接输出枚举的数值（验证手动指定的编号）
    cout << "\n初级工程师的枚举数值：" << employee1 << endl;
    cout << "高级工程师的枚举数值：" << employee2 << endl;

    return 0;
}