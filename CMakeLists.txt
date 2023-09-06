cmake_minimum_required(VERSION 3.12)
project(CharArrayModifier)

# Set C++ standard
set(CMAKE_CXX_STANDARD 20)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -fprofile-arcs -ftest-coverage")

link_libraries(
    /usr/local/lib/libgtest.a
    /usr/local/lib/libgtest_main.a
    /System/Volumes/Data/opt/homebrew/lib/libfmt.a

    )

# Add the include directories for your project
include_directories(
    /Users/haticenurel/Documents/GitHub/googletest/googletest/include
    /Users/haticenurel/Downloads/fmt-master/include
    ../include
    .
    )

add_library(main
    ../src/main.cpp
)

# Add the test executable
add_executable(CharArrayModifier
    ../src/main.cpp
    
    )



