//
// Created by academst on 05.07.18.
//

#include "Weapon.h"
#include "Hammer.h"


type Weapon::getType() {
    return type::Weapon;

}

bool Weapon::isCriticalHit() {
    int demage = rand() % 10;
    if (demage > crit)
        return true;
    return false;
}
