#include "../include/NPCFactory.h"
#include "../include/Princess.h"
#include "../include/Dragon.h"
#include "../include/Knight.h"

std::shared_ptr<NPC> ConcreteNPCFactory::createNPC(const std::string& type, const std::string& name, int x, int y) {
    if (type == "Princess") {
        return std::make_shared<Princess>(name, x, y);
    } else if (type == "Dragon") {
        return std::make_shared<Dragon>(name, x, y);
    } else if (type == "Knight") {
        return std::make_shared<Knight>(name, x, y);
    }
    return nullptr;
}