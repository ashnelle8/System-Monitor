#include <fstream>
#include "gtest/gtest.h"
#include "../include/Logger.hpp"
#include "../include/CPUUsageMonitor.hpp"
#include "../include/DiskUsageMonitor.hpp"
#include "../include/MemoryUsageMonitor.hpp"
#include "../include/NetworkUsageMonitor.hpp"

TEST(LoggerTest, TestLogData) {

    std::ifstream logFile;
    
    Logger logger;
    CPUUsageMonitor cpu;
    DiskUsageMonitor disk;
    MemoryUsageMonitor memory;
    NetworkUsageMonitor network;

    float cpuUsage = cpu.getUsage();
    float diskUsage = disk.getUsage();
    float memoryUsage = memory.getUsage();
    float networkUsage = network.getUsage();

    logger.logData("logFile");

    logFile.open("logFile");

    std::stringstream buffer;

    std::string fileContent;

    if (logFile.is_open()) {
        buffer << logFile.rdbuf();
        logFile.close();
    }

    fileContent = buffer.str();

    std::ostringstream expectedContent;

    expectedContent << "Cpu = " << cpuUsage << ", disk = " << diskUsage << ", memory = " << memoryUsage << ", network = " << networkUsage;

    ASSERT_EQ(fileContent, expectedContent.str());
}