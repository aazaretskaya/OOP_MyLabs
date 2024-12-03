#ifndef NPCFACTORY_H
#define NPCFACTORY_H

#include <memory>
#include "NPC.h"

class NPCFactory {
public:
    virtual ~NPCFactory() = default;
    virtual std::shared_ptr<NPC> createNPC(const std::string& type, const std::string& name, int x, int y) = 0;
};

class ConcreteNPCFactory : public NPCFactory {
public:
    std::shared_ptr<NPC> createNPC(const std::string& type, const std::string& name, int x, int y) override;
};

#endif 