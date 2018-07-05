//
// Created by academst on 05.07.18.
//

#ifndef FIGHT_DAGGER_H
#define FIGHT_DAGGER_H


#include "Weapon.h"

class Dagger : Weapon {
public:
    Dagger() : Weapon() {}

    int attack() override;
};


#endif //FIGHT_DAGGER_H
