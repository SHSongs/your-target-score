cmake_minimum_required(VERSION 3.17)
project(your-target-score)

set(CMAKE_CXX_STANDARD 14)
add_subdirectory(lib/googletest-release-1.10.0)
include_directories(lib/googletest-release-1.10.0/googletest/include)
include_directories(lib/googletest-release-1.10.0/googlemock/include)

add_subdirectory(calculator)
add_subdirectory(src)
add_subdirectory(Tests)

