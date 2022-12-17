cmake_minimum_required(VERSION 3.5)

project(classExercise LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(
    classExercise main.cpp
    person.h
    employee.h
    employee.cpp
    manager.h
    manager.cpp
)

install(TARGETS classExercise
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
