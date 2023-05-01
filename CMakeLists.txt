cmake_minimum_required(VERSION 3.0)

project(LinkedList)

set(CMAKE_CXX_STANDARD 11)

# Soruce files definition
# set(SOURCES
#   
# )

# Header files definitions
set(HEADERS
    include/LinkedList.h
    include/LinkedList.cpp
)

# Include path definition
include_directories(include)

# Executable 
add_executable(LinkedList
    main.cpp
    ${HEADERS}
)