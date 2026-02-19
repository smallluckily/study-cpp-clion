# 项目配置文件
cmake_minimum_required(VERSION 3.10)

# 项目基本信息
project(study_cpp_clion 
    VERSION 1.0.0
    DESCRIPTION "C++学习项目示例"
    LANGUAGES CXX
)

# 设置C++标准
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# 编译选项
if(MSVC)
    # Visual Studio编译器选项
    add_compile_options(/W4)
else()
    # GCC/Clang编译器选项
    add_compile_options(-Wall -Wextra -pedantic)
endif()

# 可执行文件定义
add_executable(${PROJECT_NAME}
    01.cpp
)

# 设置目标属性
set_target_properties(${PROJECT_NAME} PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED YES
    CXX_EXTENSIONS NO
)
