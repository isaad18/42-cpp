#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap{
	private:
		ScavTrap();
	public:
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const& other){this->name = other.name; this->HP = other.HP; this->mana = other.mana; this->AD = other.AD;}
		ScavTrap &operator=(ScavTrap const &other){this->name = other.name; this->HP = other.HP; this->mana = other.mana; this->AD = other.AD; return *this; }
		virtual ~ScavTrap();
		void Sattack(const std::string& target);
		void StakeDamage(unsigned int amount);
		void SbeRepaired(unsigned int amount);
};

#endif // !1
