#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap{
	protected:
		std::string name;
		int HP;
		int mana;
		int AD;
	public:
		ClapTrap(std::string name);
		ClapTrap();
		ClapTrap(ClapTrap const& other);
		ClapTrap &operator=(ClapTrap const &other);
		virtual ~ClapTrap();
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif
