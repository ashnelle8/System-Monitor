#ifndef CONSOLEUI_HPP
#define CONSOLEUI_HPP

#include <string>
#include <iostream>

class ConsoleUI
{
private:
    /* data */
public:
    ConsoleUI(/* args */);
    ~ConsoleUI();
    void displayUsage(float cpu, float memory, float disk, float network);
};

#endif