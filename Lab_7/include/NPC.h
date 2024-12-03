#ifndef NPC_H
#define NPC_H

#include <string>
#include <vector>
#include <memory>
#include <shared_mutex>

class BattleVisitor;
class Observer;

class NPC {
public:
    NPC(const std::string& name, int x, int y);
    virtual ~NPC() = default;

    virtual void accept(BattleVisitor& visitor) = 0;
    virtual std::string getType() const = 0;

    std::string getName() const;
    int getX() const;
    int getY() const;
    bool isAlive() const;

    void move(int dx, int dy);
    void kill();

    void attach(std::shared_ptr<Observer> observer);
    void notify(const std::string& event);

protected:
    std::string name;
    int x, y;
    bool alive;
    std::vector<std::shared_ptr<Observer>> observers;
    mutable std::shared_mutex mutex;
};

#endif 