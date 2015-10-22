cmake_minimum_required(VERSION 3.3)
project(HttpServer)

set(SOURCE_FILES main.cpp server.cpp HttpRequest.cpp utils.cpp HttpResponse.cpp)
set(CMAKE_CXX_FLAGS "-std=c++11")
set(CMAKE_CXX_COMPILER "g++-4.9")

add_executable(HttpServer ${SOURCE_FILES})

TARGET_LINK_LIBRARIES(HttpServer event)