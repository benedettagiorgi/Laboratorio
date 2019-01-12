cmake_minimum_required(VERSION 3.4)

add_subdirectory(./lib/googletest)
set(gtest_SOURCE_DIR, ./lib/googletest/)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

set(TEST_SOURCE_FILES runAllTests.cpp TestMatrici.cpp TestOperatori.cpp)
add_executable(runMatriciTemplateTests ${TEST_SOURCE_FILES})
target_link_libraries(runMatriciTemplateTests gtest gtest_main)