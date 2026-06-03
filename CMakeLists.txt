cmake_minimum_required(VERSION 3.10)
project(AutomotiveApp)

# Enable ASAN (Address Sanitizer) and Code Coverage
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=address -fprofile-arcs -ftest-coverage")
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -fsanitize=address --coverage")

add_executable(AutomotiveApp main.cpp SpeedMonitor.cpp)

enable_testing()
add_executable(RunTests test.cpp SpeedMonitor.cpp)
add_test(NAME AutomotiveTest COMMAND RunTests)
