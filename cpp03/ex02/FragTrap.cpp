#include "FragTrap.hpp"
#include "ClapTrap.hpp"

std::string FragTrap::ADmsg[hi5guys] = {
	"facckkkk!",
	"take that shit!",
	"put it in yo ass",
	"cover the face fck the base!!",
	"hi, I am wall-E"
};

FragTrap::FragTrap(){
	ClapTrap clone("SHITE");
	this->name = "BOT";
	this->HP = 100;
	this->mana = 100;
	this->AD = 30;
	std::cout << name << " FragTrap player has been constructed" << std::endl;
}

FragTrap::FragTrap(std::string name){
	ClapTrap clone("SHITE");
	this->name = name;
	this->HP = 100;
	this->mana = 100;
	this->AD = 30;
	std::cout << name << " FragTrap player has been constructed" << std::endl;
}

FragTrap::~FragTrap(){
	std::cout << "FragTrap " << this->name << " has been destroyed, it was already useless" << std::endl;
}

void FragTrap::attack(const std::string& target){
	static int i;
	if (this->AD <= 0)
		std::cout << "FragTrap " << this->name << " is so weak to attack" << std::endl;
	else {
		if (this->mana > 0){
			std::cout << "FragTrap " << this->name << " attacked " << target << ", causing " << this->AD << " points of damage!" << std::endl;
			this->mana--;
			std::cout << ADmsg[i] << std::endl;
			i = (i + 1) % 4;
		}
		else
			std::cout << this->name << " has no enough mana!" << std::endl;
	}
}

void FragTrap::takeDamage(unsigned int amount){
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

void FragTrap::beRepaired(unsigned int amount){
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
