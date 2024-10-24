#ifndef RESOURCES_MONITOR_HPP
#define RESOURCES_MONITOR_HPP

#include "Logger.hpp"
#include "Alerter.hpp"
#include "CPUUsageMonitor.hpp"
#include "DiskUsageMonitor.hpp"
#include "MemoryUsageMonitor.hpp"
#include "NetworkUsageMonitor.hpp"
#include "ConsoleUI.hpp"

class ResourcesMonitor
{
private:
    CPUUsageMonitor cpuMonitor;
    MemoryUsageMonitor memoryMonitor;
    DiskUsageMonitor diskMonitor;
    NetworkUsageMonitor networkMonitor;
    Logger logger;
    Alerter alerter;
public:
    ResourcesMonitor();
    ~ResourcesMonitor();
    void startMonitoring();
    void stopMonitoring();
};

#endif
