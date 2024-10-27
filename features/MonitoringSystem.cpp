#include <gtest/gtest.h>
#include <cucumber-cpp/defs.hpp> 
#include "CPUUsageMonitor.hpp"
#include "DiskUsageMonitor.hpp"
#include "MemoryUsageMonitor.hpp"
#include "NetworkUsageMonitor.hpp"

CPUUsageMonitor cpuMonitor;
DiskUsageMonitor diskMonitor;
MemoryUsageMonitor memoryMonitor;
NetworkUsageMonitor networkMonitor;

float cpuUsage;
float diskUsage;
float memoryUsage;
float networkUsage;

// Gherkin steps
GIVEN("CPU monitor is initialized") {
    cpuMonitor;
}

GIVEN("Disk monitor is initialized") {
    diskMonitor;
}

GIVEN("Memory monitor is initialized") {
    memoryMonitor;
}

GIVEN("Network monitor is initialized") {
    networkMonitor;
}

WHEN("I recover the use of resources") {
    cpuUsage = cpuMonitor.getUsage();
    diskUsage = diskMonitor.getUsage();
    memoryUsage = memoryMonitor.getUsage();
    networkUsage = networkMonitor.getUsage();
}

THEN("CPU utilization must be greater than or equal to 0") {
    EXPECT_GE(cpuUsage, 0.0f);
}

THEN("Disk utilization must be greater than or equal to 0") {
    EXPECT_GE(diskUsage, 0.0f);
}

THEN("Memory utilization must be greater than or equal to 0") {
    EXPECT_GE(memoryUsage, 0.0f);
}

THEN("Network utilization must be greater than or equal to 0") {
    EXPECT_GE(networkUsage, 0.0f);
}
