add_executable(runTests test_main.cpp)

# Link against sample_lib instead of recompiling some_code.cpp
target_link_libraries(runTests PRIVATE my_lib gtest gtest_main)

include(GoogleTest)
gtest_discover_tests(runTests)
