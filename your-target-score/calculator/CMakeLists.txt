
add_library(
        calculator
        include/Calc.h
        src/Calc.cpp
)


target_include_directories(calculator PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src ${CMAKE_CURRENT_SOURCE_DIR}/include)