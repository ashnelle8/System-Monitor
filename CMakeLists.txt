cmake_minimum_required(VERSION 3.10)

# Project name
project(SystemMonitor)

# Use of C++17
set(CMAKE_CXX_STANDARD 17)

# Add source files
add_executable(SystemMonitor
    src/Alerter.cpp
    src/ConsoleUI.cpp
    src/CPUUsageMonitor.cpp
    src/DiskUsageMonitor.cpp
    src/Logger.cpp
    src/main.cpp
    src/MemoryUsageMonitor.cpp
    src/NetworkUsageMonitor.cpp
    src/ResourcesMonitor.cpp
)

# Find Google Test on the system
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Add an executable for testing
add_executable(runTests
    src/Alerter.cpp
    src/ConsoleUI.cpp
    src/CPUUsageMonitor.cpp
    src/DiskUsageMonitor.cpp
    src/MemoryUsageMonitor.cpp
    src/NetworkUsageMonitor.cpp
    tests/test_Alerter.cpp
    tests/test_ConsoleUI.cpp
    tests/test_CPUUsageMonitor.cpp
    tests/test_DiskUsageMonitor.cpp
    tests/test_Logger.cpp
    tests/test_MemoryUsageMonitor.cpp
    tests/test_NetworkUsageMonitor.cpp
)

# Link Google Test to the tests executable
target_link_libraries(runTests ${GTEST_LIBRARIES} ${GTEST_MAIN_LIBRARIES} pthread)