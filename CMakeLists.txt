cmake_minimum_required(VERSION 3.30)
project(CLionProjects)

set(CMAKE_CXX_STANDARD 14)

include_directories(MergeSort)

add_library(Sortowanie STATIC MergeSort/MergeSortclass.cpp)
    target_include_directories(Sortowanie PUBLIC Headers)

        add_executable(CLionProjects
    MergeSort/MergeSort.cpp
    MergeSort/MergeSortclass.cpp
    MergeSort/MergeStoreclass.hpp
        MergeSort/testy/Testsortowania.cpp)

enable_testing()
add_subdirectory(MergeSort/testy)