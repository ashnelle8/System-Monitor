class Alerter
{
private:
    /* data */
public:
    Alerter();
    void checkThresholds(float cpuUsage, float diskUsage, float memoryUsage, float networkUsage);
    ~Alerter();
};


