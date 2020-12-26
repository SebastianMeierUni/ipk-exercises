# Set minimum required CMake version

cmake_minimum_required(VERSION 3.5)

# Start project and set its name to ...

project(Flächenberechnung VERSION 1.0)

# Force compiler to run in C++14 mode

set(CMAKE_CXX_STANDARD 14)

# Create Libaries
add_library(canvaspointpgm canvas.cc point.cc pgm.cc)

# Create executable programs

add_executable(plot plot.cc)

target_link_libraries(plot canvaspointpgm)

enable_testing()

add_executable(testcorners testcorners.cc)

target_link_libraries(testcorners canvaspointpgm)
add_test(Testcorners testcorners)