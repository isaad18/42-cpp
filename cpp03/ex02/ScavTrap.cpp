#include"ScavTrap.hpp"

ScavTrap::ScavTrap(){
	this->name = "BOT";
	this->HP = 100;
	this->mana = 50;
	this->AD = 20;
	std::cout << name << " ScavTrap player has been constructed" << std::endl;
}

ScavTrap::ScavTrap(std::string name){
	this->name = name;
	this->HP = 100;
	this->mana = 50;
	this->AD = 20;
	std::cout << name << " ScavTrap player has been constructed" << std::endl;
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap " << this->name << " has been destroyed, it was already useless" << std::endl;
}

void ScavTrap::Sattack(const std::string& target){
	if (this->AD <= 0)
		std::cout << "ScavTrap " << this->name << " is so weak to attack" << std::endl;
	else {
		if (this->mana > 0){
			std::cout << "ScavTrap " << this->name << " attacked " << target << ", causing " << this->AD << " points of damage!" << std::endl;
			this->mana--;
		}
		else
			std::cout << this->name << " has no enough mana!" << std::endl;
	}
}

void ScavTrap::StakeDamage(unsigned int amount){
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

void ScavTrap::SbeRepaired(unsigned int amount){
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
