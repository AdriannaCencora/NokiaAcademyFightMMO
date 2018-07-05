#include <iostream>
#include <cstdlib>
#include <ctime>

#include "Hammer.h"
#include "Dagger.h"
#include "Helm.h"
#include "Pants.h"
#include "Boots.h"
#include "Tunic.h"
#include "Gloves.h"

int main() {
    srand(static_cast<unsigned int>(time(NULL)));


    Hammer hammer;
    Dagger dagger;
    hammer.attack();
    dagger.attack();

    Helm hm;

    if (hm.getType() == type::Armor)
        std::cout << "Armor" << std::endl;


    return 0;
}