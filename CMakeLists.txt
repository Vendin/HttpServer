cmake_minimum_required(VERSION 3.3)
project(HttpServer)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp server.cpp server.h HttpRequest.cpp HttpRequest.h HttpResponse.cpp HttpResponse.h utils.cpp utils.h)
add_executable(HttpServer ${SOURCE_FILES})