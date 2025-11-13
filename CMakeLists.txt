cmake_minimum_required(VERSION 3.30)
project(DungeonCrawler)

set(CMAKE_CXX_STANDARD 20)

file(GLOB SOURCES "*.cpp")
add_executable(DungeonCrawler ${SOURCES})