//
// Created by academst on 05.07.18.
//

#ifndef FIGHT_HAMMER_H
#define FIGHT_HAMMER_H


#include "Weapon.h"

class Hammer : Weapon {
public:
    Hammer() : Weapon() {}

    int attack() override;

};


#endif //FIGHT_HAMMER_H
