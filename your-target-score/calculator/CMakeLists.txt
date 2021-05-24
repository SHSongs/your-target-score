
add_library(
        simulator
        include/calc.h
        src/calc.cpp
)


target_include_directories(simulator PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src ${CMAKE_CURRENT_SOURCE_DIR}/include)