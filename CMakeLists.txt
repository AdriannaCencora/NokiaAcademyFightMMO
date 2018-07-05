cmake_minimum_required(VERSION 3.10)
project(fight)

set(CMAKE_CXX_STANDARD 11)

add_executable(fight main.cpp Item.h Weapon.cpp Weapon.h Hammer.cpp Hammer.h Dagger.cpp Dagger.h IArmor.cpp IArmor.h Helm.cpp Helm.h Pants.cpp Pants.h Tunic.cpp Tunic.h Gloves.cpp Gloves.h Boots.cpp Boots.h Player.cpp Player.h)