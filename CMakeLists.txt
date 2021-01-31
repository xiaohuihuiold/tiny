cmake_minimum_required(VERSION 3.0.0)
project(tiny VERSION 0.1.0)

include(CTest)
enable_testing()

# 添加include目录
include_directories(
    $ENV{INCLUDE_GLFW}
    $ENV{INCLUDE_GLM}
)

# 添加library目录
link_directories(
    $ENV{LIBRARY_GLFW}
)

# 添加源码
add_executable(tiny main.cpp)

# 链接
target_link_libraries(
    tiny
    glfw3
)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
