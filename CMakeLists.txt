# 指定CMake的最低版本要求，和你项目一致
cmake_minimum_required(VERSION 3.26)

# 项目名称，保持和你原有一致
project(study_cpp_clion)

# 设置C++标准为17，确保代码兼容性
set(CMAKE_CXX_STANDARD 17)
# 强制要求使用指定的C++标准，避免降级
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 为每个.cpp文件创建独立的可执行目标
# 01.cpp → 生成可执行文件01
add_executable(01 01.cpp)
# 02.cpp → 生成可执行文件02
add_executable(02 02.cpp)
# 03.cpp → 生成可执行文件03
add_executable(03 03.cpp)

# （可选）为所有目标统一设置属性（替代原来报错的那行）
# 如果不需要可以注释/删除，不影响核心运行
set_target_properties(01 02 03 PROPERTIES
        CXX_STANDARD 17
        CXX_STANDARD_REQUIRED ON
)
add_executable(04 04.cpp)
add_executable(05 05.cpp)
