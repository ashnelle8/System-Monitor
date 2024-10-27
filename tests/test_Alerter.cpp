#include "gtest/gtest.h"
#include "../include/Alerter.hpp"

TEST(AlerterTest, TestCheckThresholds) {
    
    Alerter alerter;

    std::stringstream buffer;

    std::streambuf *oldCoutBuffer = std::cout.rdbuf();
    std::cout.rdbuf(buffer.rdbuf());

    alerter.checkThresholds(90.0, 90.0, 90.0, 90.0);

    std::string output = buffer.str();

    std::cout.rdbuf(oldCoutBuffer);

    std::string expectedOutput = "Critical cpu overload\nCritical disk overload\nCritical memory overload\nCritical network overload\n";

    ASSERT_EQ(output, expectedOutput);
}