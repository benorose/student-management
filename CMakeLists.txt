cmake_minimum_required (VERSION 2.8)
 
project (student_management)

include_directories(./include)

set(source 
    src/main.cpp
    src/student.cpp
    src/student_management.cpp
)
add_executable(Management ${source})