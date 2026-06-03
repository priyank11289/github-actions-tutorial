cmake_minimum_required(VERSION 3.10)
project(HelloWorld)

# Create our main app
add_executable(HelloWorld main.cpp)

# Enable CMake's testing framework
enable_testing()

# Create a separate executable just for testing
add_executable(RunTests test.cpp)

# Tell CMake to run this executable when we run 'ctest'
add_test(NAME CalculatorTest COMMAND RunTests)
