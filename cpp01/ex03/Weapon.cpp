#include "Weapon.hpp"

void Weapon::setType(std::string newname)
{
	Wname = newname;
}

Weapon::Weapon(std::string name):
Wname(name) 
{}

std::string Weapon::getType()
{
	return Wname;
}