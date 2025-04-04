cmake_minimum_required(VERSION 3.10)
project(SampleApp)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Create a library for the main application
add_library(my_lib src/my_math.cpp)

# Main application
add_executable(my_app src/main.cpp)
target_link_libraries(my_app PRIVATE my_lib)

# Enable testing
enable_testing()

# Add Google Test
add_subdirectory(third_party/googletest)

# Add test subdirectory
add_subdirectory(tests)
