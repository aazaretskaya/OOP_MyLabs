#ifndef OBSERVER_H
#define OBSERVER_H

#include <string>

class Observer {
public:
    virtual ~Observer() = default;
    virtual void update(const std::string& event) = 0;
};

class ScreenLogger : public Observer {
public:
    void update(const std::string& event) override;
};

class FileLogger : public Observer {
public:
    void update(const std::string& event) override;
};

#endif 