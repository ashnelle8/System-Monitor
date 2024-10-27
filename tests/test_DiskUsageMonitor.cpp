#include "gtest/gtest.h"
#include "../include/DiskUsageMonitor.hpp"

TEST(DiskUsageMonitorTest, TestGetUsage) {
    
    DiskUsageMonitor disk;

    EXPECT_TRUE(disk.getUsage() >= 0.0);

    EXPECT_TRUE(disk.getUsage() <= 100.0);
}