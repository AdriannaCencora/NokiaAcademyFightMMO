//
// Created by academst on 05.07.18.
//

#ifndef FIGHT_ITEM_H
#define FIGHT_ITEM_H

enum class type {
    Weapon, Armor
};

class Item {
public:
    Item() = default;;

    virtual type getType() = 0;

    virtual ~Item() {}
};


#endif //FIGHT_ITEM_H


