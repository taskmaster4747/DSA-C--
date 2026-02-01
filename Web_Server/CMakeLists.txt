cmake_minimum_required(VERSION 3.21)
project(crow_server LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Boost REQUIRED)
find_package(asio CONFIG REQUIRED)

add_executable(server main.cpp)
target_link_libraries(server PRIVATE Boost::boost asio::asio)
