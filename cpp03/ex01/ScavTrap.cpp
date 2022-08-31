#include"ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name){
	this->name = name;
	this->HP = 100;
	this->mana = 50;
	this->AD = 20;
	std::cout << name << " ScavTrap player has been constructed" << std::endl;
}

ScavTrap::ScavTrap(){
	std::cout << name << " ScavTrap player has been constructed" << std::endl;
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap " << this->name << " has been destroyed, it was already useless" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const& other){
	this->name = other.name; this->HP = other.HP; this->mana = other.mana; this->AD = other.AD;
	std::cout << name << " ScavTrap player has been constructed" << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &other){this->name = other.name; this->HP = other.HP; this->mana = other.mana; this->AD = other.AD; return *this;}

void ScavTrap::guardGate(){
	std::cout << "ScavTrap " << this->name << " is now in gate keeper mode" << std::endl;
}
