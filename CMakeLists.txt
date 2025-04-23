
cmake_minimum_required(VERSION 3.10)
project(BoostLoggingExample)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(BOOST_ROOT C:/boost)

# Find Boost
find_package(
    Boost 
    REQUIRED 
    COMPONENTS 
    log 
    log_setup
)

# Include Boost headers
include_directories(
    C:/boost/include/boost_1_87_0
)

# Add the executable
add_executable(BoostLoggingExample
    main.cpp
)

target_compile_definitions(BoostLoggingExample PUBLIC
    _WIN32_WINNT=0x0A00
    # <https://learn.microsoft.com/en-us/cpp/porting/modifying-winver-and-win32-winnt?view=msvc-170>
)

# Link Boost libraries
target_link_libraries(BoostLoggingExample 
    ${Boost_LIBRARIES}
    ${Boost_LOG_LIBRARY}
    ${Boost_LOG_SETUP_LIBRARY}
)
