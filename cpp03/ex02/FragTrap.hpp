#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class FragTrap : virtual public ClapTrap {
	private:
		FragTrap();
		static const int hi5guys = 5;
		static std::string ADmsg[hi5guys];
	public:
		FragTrap(std::string name);
		FragTrap(FragTrap const& other){this->name = other.name; this->HP = other.HP; this->mana = other.mana; this->AD = other.AD;}
		FragTrap &operator=(FragTrap const &other){this->name = other.name; this->HP = other.HP; this->mana = other.mana; this->AD = other.AD; return *this; }
		virtual ~FragTrap();
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif