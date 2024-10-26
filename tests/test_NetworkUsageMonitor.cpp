#include "gtest/gtest.h"
#include "../include/NetworkUsageMonitor.hpp"

TEST(NetworkUsageMonitorTest, TestGetUsage) {
    
    NetworkUsageMonitor network;

    EXPECT_TRUE(network.getUsage() > 0.0);

    EXPECT_TRUE(network.getUsage() < 100.0);

}