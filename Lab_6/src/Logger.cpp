#include "../include/Logger.h"
#include <fstream>

Logger::Logger() {
    file.open("log.txt", std::ios::app);
}

Logger::~Logger() {
    if (file.is_open()) {
        file.close();
    }
}

Logger& Logger::getInstance() {
    static Logger instance;
    return instance;
}

void Logger::log(const std::string& message) {
    if (file.is_open()) {
        file << message << std::endl;
    }
}