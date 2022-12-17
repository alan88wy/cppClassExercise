cmake_minimum_required(VERSION 3.5)

project(classExercise LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(
    classExercise main.cpp Person.h
    Employee.h
    employee.cpp
    Manager.h
)

install(TARGETS classExercise
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
