#include "gtest/gtest.h"
#include "../include/MemoryUsageMonitor.hpp"

TEST(MemoryUsageMonitorTest, TestGetUsage) {
    
    MemoryUsageMonitor memory;

    EXPECT_TRUE(memory.getUsage() >= 0.0);

    EXPECT_TRUE(memory.getUsage() <= 100.0);

}