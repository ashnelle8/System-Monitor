#include "gtest/gtest.h"
#include "../include/ConsoleUI.hpp"

TEST(ConsoleUITest, TestDisplayUsage) {
    
    ConsoleUI consoleUI;
    std::stringstream buffer;

    // Save the original std::cout buffer
    std::streambuf* oldCoutBuffer = std::cout.rdbuf();
    
    // Redirect std::cout to the buffer
    std::cout.rdbuf(buffer.rdbuf());

    consoleUI.displayUsage(0.33, 5.1, 8.6, 74.5);

    // Retrieve captured output
    std::string output = buffer.str();

    // Restore std::cout
    std::cout.rdbuf(oldCoutBuffer);

    // Set expected output
    std::string expectedOutput = "Usage:\nCPU: 0.33%\nMemory: 5.1%\nDisk: 8.6%\nNetwork: 74.5%\n";

    // Verify that the output matches the expected output
    EXPECT_EQ(output, expectedOutput);

}