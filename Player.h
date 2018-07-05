//
// Created by academst on 05.07.18.
//

#ifndef FIGHT_PLAYER_H
#define FIGHT_PLAYER_H


#include "Weapon.h"
#include "Helm.h"
#include "Tunic.h"
#include "Pants.h"
#include "Gloves.h"
#include "Boots.h"

class Player {
private:
    Weapon *weapon;
    Helm *helm;
    Tunic *tunic;
    Pants *pants;
    Gloves *gloves;
    Boots *boots;

    Player() : weapon(nullptr), helm{nullptr}, tunic{nullptr}, pants{nullptr}, gloves{nullptr}, boots{nullptr} {}


public:
    void equip(Item *);

};


#endif //FIGHT_PLAYER_H
