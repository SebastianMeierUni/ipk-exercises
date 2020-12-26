# Set minimum required CMake version

cmake_minimum_required(VERSION 3.5)

# Start project and set its name to ipk-demo

project(Generator VERSION 1.0)

# Force compiler to run in C++14 mode

set(CMAKE_CXX_STANDARD 14)

# Create Libaries
add_library(iostatistics statistics.cc io.cc)

# Create executable programs

add_executable(readvector readvector.cc)
add_executable(normal normal.cc)
add_executable(uniform uniform.cc)

target_link_libraries(readvector iostatistics)
target_link_libraries(normal iostatistics)
target_link_libraries(uniform iostatistics)

enable_testing()

add_executable(mean mean.cc statistics.cc io.cc)
add_executable(median median.cc statistics.cc io.cc)
add_test(Mean mean)
add_test(Median median)