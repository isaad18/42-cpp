#include "FragTrap.hpp"
#include "ClapTrap.hpp"

std::string FragTrap::ADmsg[hi5guys] = {
	"ping-pong",
	"nothing",
	"cpp03 loading",
	"FragTrap talking",
	"hi, I am wall-E"
};

FragTrap::FragTrap(){
	this->name = "BOT";
	this->HP = 100;
	this->mana = 100;
	this->AD = 30;
	std::cout << name << " FragTrap player has been constructed" << std::endl;
}

FragTrap::FragTrap(std::string name){
	this->name = name;
	this->HP = 100;
	this->mana = 100;
	this->AD = 30;
	std::cout << name << " FragTrap player has been constructed" << std::endl;
}

FragTrap::~FragTrap(){
	std::cout << "FragTrap " << this->name << " has been destroyed, it was already useless" << std::endl;
	std::cout << name << " FragTrap player has been constructed" << std::endl;
}

FragTrap::FragTrap(FragTrap const& other){this->name = other.name; this->HP = other.HP; this->mana = other.mana; this->AD = other.AD;
}

FragTrap &FragTrap::operator=(FragTrap const &other){this->name = other.name; this->HP = other.HP; this->mana = other.mana; this->AD = other.AD; return *this; }

void FragTrap::highFivesGuys(){
	static int i;

	std::cout << ADmsg[i] << std::endl;
	i = (i + 1) % 5;
}
