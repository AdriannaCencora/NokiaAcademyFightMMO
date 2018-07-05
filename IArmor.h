//
// Created by academst on 05.07.18.
//

#ifndef FIGHT_IARMOR_H
#define FIGHT_IARMOR_H


#include "Item.h"

class IArmor : Item {

protected:
    int def;

public:
    IArmor() : def(10) {}

    int getDefence();
};


#endif //FIGHT_IARMOR_H
