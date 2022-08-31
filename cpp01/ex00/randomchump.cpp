#include <iostream>
#include <string>
#include "Zombie.hpp"

void randomChump(std::string name){
    Zombie z3;
    z3.setName(name);
    z3.announce();
}
