cmake_minimum_required(VERSION 3.10)

project(
    yw.nam
    VERSION 0.1
    LANGUAGES CXX
)

# 타겟을 정의하거나
add_executable(run main.cpp UsingDoubleLinkedListExample.cpp MyList.cpp)