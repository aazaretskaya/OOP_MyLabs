#include "Observer.h"
#include <iostream>
#include "Logger.h"

void ScreenLogger::update(const std::string& event) {
    std::cout << event << std::endl;
}

void FileLogger::update(const std::string& event) {
    Logger::getInstance().log(event);
}