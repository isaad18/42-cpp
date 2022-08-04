#include"ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name, int HP, int mana, int AD){
	this->name = name;
	this->HP = HP;
	this->mana = mana;
	this->AD = AD;
	std::cout << name << " player has been constructed" << std::endl;
	std::cout << "so weak! only " << AD << " damage?" << std::endl;
}

ClapTrap::~ClapTrap(){
	std::cout << "ClapTrap " << this->name << " has been destroyed, it was already useless" << std::endl;
}

void ClapTrap::attack(const std::string& target){
	if (this->AD == 0)
		std::cout << "0 damage? use your head!" << std::endl;
	else {
		if (this->mana > 0){
			std::cout << "ClapTrap " << this->name << " attacked " << target << ", causing " << this->AD << " points of damage!" << std::endl;
			this->mana--;
		}
		else
			std::cout << this->name << " has no enough mana!" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount){
	if (HP <= 0)
		std::cout << this->name << " is already dead" << std::endl;
	else {
		this->HP -= amount;
		if (this->HP <= 0)
			std::cout << this->name << " died" << std::endl;
		else
			std::cout << this->name << " got damaged, current HP: " << this->HP << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount){
	if (HP <= 0)
		std::cout << this->name << " is already dead" << std::endl;
	else {
		if (this->mana > 0) {
			this->HP += amount;
			std::cout << name << " has " << this->HP << " HP curently" << std::endl;
			this->mana--;
		}
		else
			std::cout << this->name << " has no enough mana!" << std::endl;
	}
}
