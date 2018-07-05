//
// Created by academst on 05.07.18.
//

#ifndef FIGHT_WEAPON_H
#define FIGHT_WEAPON_H

#include <iostream>
#include "Item.h"

class Weapon : Item {
protected:
    int att;
    int crit;

public:
    Weapon() : att(3), crit(6) {}

    virtual type getType() override;

    virtual int attack() = 0;

    bool isCriticalHit();

    ~Weapon() {}


};


#endif //FIGHT_WEAPON_H
