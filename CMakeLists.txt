cmake_minimum_required(VERSION 3.0.0)
project(tiny VERSION 0.1.0)

# msvc
if (CMAKE_SYSTEM_NAME MATCHES "Windows")
    add_compile_options("$<$<C_COMPILER_ID:MSVC>:/utf-8>")
    add_compile_options("$<$<CXX_COMPILER_ID:MSVC>:/utf-8>")
endif ()

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
file(GLOB TINY_SOURCES "*.h" "*.cpp")
add_executable(tiny ${TINY_SOURCES})

# 链接
target_link_libraries(
    tiny
    glfw3
)
if (CMAKE_SYSTEM_NAME MATCHES "Windows")
    target_link_libraries(tiny opengl32)
else ()
    MESSAGE(STATUS "other platform: ${CMAKE_SYSTEM_NAME}")
endif ()

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
