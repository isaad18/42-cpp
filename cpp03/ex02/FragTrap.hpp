#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include<iostream>
#include<string>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap{
	private:
		FragTrap();
	public:
		FragTrap(std::string name);
		virtual ~FragTrap();
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif
