//
// Created by academst on 05.07.18.
//

#include "Hammer.h"


int Hammer::attack() {

    if (isCriticalHit())
        att *= 2;
    std::cout << "Attack: " << Weapon::att << std::endl;
}