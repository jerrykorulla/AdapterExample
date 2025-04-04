# SimpleCmakeProject
 A simple CMake project that has tests

To build this:

You need to have MinGW, CMake, Ninja installed and added to path

cmake -B build -G Ninja
cmake --build ./build
ctest --test-dir ./build
