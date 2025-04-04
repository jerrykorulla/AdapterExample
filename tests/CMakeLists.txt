add_executable(runTests test_main.cpp)

# Link against sample_lib instead of recompiling some_code.cpp
target_link_libraries(runTests PRIVATE my_lib gtest gtest_main)

# Copy the DLL to the runtime output directory
add_custom_command(TARGET runTests POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_if_different
    $<TARGET_FILE:my_lib> $<TARGET_FILE_DIR:runTests>
)

include(GoogleTest)
gtest_discover_tests(runTests)
