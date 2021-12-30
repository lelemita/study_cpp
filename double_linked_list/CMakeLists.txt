cmake_minimum_required(VERSION 3.14)

project(
    run
    LANGUAGES CXX
)

add_executable(${PROJECT_NAME} 
    main.cpp
    MyList.h
    MyList.cpp
)

set_target_properties(${PROJECT_NAME}
    PROPERTIES
        CXX_STANDARD 14
)
