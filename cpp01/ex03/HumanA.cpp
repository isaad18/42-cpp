#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &wepo): name(name), wep(wepo){}

void HumanA::attack()
{
	std::cout << name << " attacks with their " << wep.getType() << std::endl;
}