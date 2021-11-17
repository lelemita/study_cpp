cmake_minimum_required(VERSION 3.11)

project(
    yw
    VERSION 0.1
    LANGUAGES CXX
)

# 타겟을 정의하거나
add_executable(p main.cpp foo.cpp)

# 타겟의 속성을 지정
target_compile_options(
    p PUBLIC -Wall -Werror
)

# ${CMAKE_SOURCE_DIR} : CMakeLists.txt 위치
target_include_directories(
    p PUBLIC ${CMAKE_SOURCE_DIR}/includes
)

add_subdirectory(lib)
target_link_libraries(p sh)