cmake_minimum_required(VERSION 3.13)
project(CPP_Learning VERSION 1.0)

set(CMAKE_CXX_STANDARD 14)
#set(CMAKE_CXX_STANDARD_REQUIRED True)
#set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -static-libstdc++ -static-libgcc")

#add_subdirectory(CPP_Learning ch9/file2.cpp)
#target_link_directories(CPP_Learning ch9/file2.cpp)
#add_executable(CPP_Learning ch9/file1.cpp ch9/file2.cpp)
#target_compile_definitions(CPP_Learning ch9/file2.cpp)

add_executable(CPP_Learning ch10/usestock2.cpp ch10/stock20.cpp )