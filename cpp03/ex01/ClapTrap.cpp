#include"ClapTrap.hpp"

ClapTrap::ClapTrap(): name("bot"), HP(10), mana(10), AD(0) {
	std::cout << name << " ClapTrap player has been constructed by default" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const& other) : name(other.name), HP(other.HP), mana(other.mana), AD(other.AD){
	std::cout << name << " ClapTrap player has been constructed by copy" << std::endl;
};

ClapTrap &ClapTrap::operator=(ClapTrap const &other){this->name = other.name; this->HP = other.HP; this->mana = other.mana; this->AD = other.AD; return *this; }

ClapTrap::ClapTrap(std::string name){
	this->HP = 10;
	this->name = name;
	this->mana = 10;
	this->AD = 0;
	std::cout << name << " ClapTrap player has been constructed" << std::endl;
}

ClapTrap::~ClapTrap(){
	std::cout << "ClapTrap " << this->name << " has been destroyed, it was already useless" << std::endl;
}

void ClapTrap::attack(const std::string& target){
	if (this->AD <= 0)
		std::cout << "ClapTrap " << this->name << " is so weak to attack" << std::endl;
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
