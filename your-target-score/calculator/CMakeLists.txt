
add_library(
        calculator
        include/calc.h
        src/calc.cpp
)


target_include_directories(calculator PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src ${CMAKE_CURRENT_SOURCE_DIR}/include)