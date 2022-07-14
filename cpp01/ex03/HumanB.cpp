#include "HumanB.hpp"

HumanB::HumanB(std::string newname): name(newname), weapon(NULL){}

void HumanB::setWeapon(Weapon &newweapon) {weapon = &newweapon;}

void HumanB::attack()
{
	std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}