cmake_minimum_required(VERSION 3.10)
project(SampleApp)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Enable automatic symbol export for DLLs
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

# Organize source files
file(GLOB MY_LIB_SOURCES src/*.cpp)

# Create a shared library (DLL) for the main application
add_library(my_lib SHARED ${MY_LIB_SOURCES})
target_include_directories(my_lib PUBLIC include)

# Set output directories
set_target_properties(my_lib PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin"
    LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib"
    ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib"
)

# Add installation rules
install(TARGETS my_lib
    RUNTIME DESTINATION bin
    LIBRARY DESTINATION lib
    ARCHIVE DESTINATION lib
)
install(DIRECTORY include/ DESTINATION include)

# Enable testing
enable_testing()

# Add Google Test
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
add_subdirectory(third_party/googletest)

# Add test subdirectory
add_subdirectory(tests)
