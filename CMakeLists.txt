
cmake_minimum_required(VERSION 3.10)
project(BoostLoggingExample)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Find Boost
find_package(Boost REQUIRED COMPONENTS log)

# Include Boost headers
include_directories(${Boost_INCLUDE_DIRS})

# Add the executable
add_executable(BoostLoggingExample main.cpp)

# Link Boost libraries
target_link_libraries(BoostLoggingExample ${Boost_LIBRARIES})
