#include "gtest/gtest.h"
#include "../include/CPUUsageMonitor.hpp"

TEST(CPUUsageMonitorTest, TestGetUsage) {

    CPUUsageMonitor cpu;

    std::cout << "lol";

    EXPECT_TRUE(cpu.getUsage() > 0.0);

    EXPECT_TRUE(cpu.getUsage() < 100.0);
}
