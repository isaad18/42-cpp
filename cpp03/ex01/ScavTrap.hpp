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
		virtual ~ScavTrap();
		void Sattack(const std::string& target);
		void StakeDamage(unsigned int amount);
		void SbeRepaired(unsigned int amount);
};

#endif // !1
