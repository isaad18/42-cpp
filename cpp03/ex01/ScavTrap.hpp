#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <string>

class ScavTrap{
	private:
		std::string name;
		int HP;
		int mana;
		int AD;
	public:
		ScavTrap(std::string name, int HP, int mana, int AD);
		virtual ~ScavTrap();
		void Sattack(const std::string& target);
		void StakeDamage(unsigned int amount);
		void SbeRepaired(unsigned int amount);
};

#endif // !1
