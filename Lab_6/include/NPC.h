#ifndef NPC_H
#define NPC_H

#include <string>
#include <vector>
#include <memory>

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

    void attach(std::shared_ptr<Observer> observer);
    void notify(const std::string& event);

protected:
    std::string name;
    int x, y;
    std::vector<std::shared_ptr<Observer>> observers;
};

#endif 