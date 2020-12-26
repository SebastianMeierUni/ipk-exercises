# Set minimum required CMake version

cmake_minimum_required(VERSION 3.5)

# Start project and set its name to ...

project(Flächenberechnung VERSION 1.0)

# Force compiler to run in C++14 mode

set(CMAKE_CXX_STANDARD 14)

# Create Libaries
add_library(polypoint polygon.cc point.cc)

# Create executable programs

add_executable(ueberschlagendePolygone ueberschlagendePolygone.cc)
add_executable(ErstenZehnRegelmaessigenNEcke ErstenZehnRegelmaessigenNEcke.cc)

target_link_libraries(ueberschlagendePolygone polypoint)
target_link_libraries(ErstenZehnRegelmaessigenNEcke polypoint)
