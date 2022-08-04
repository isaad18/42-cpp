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
		ClapTrap(): name("bot"), HP(10), mana(10), AD(0) {}
		ClapTrap(ClapTrap const& other) : name(other.name), HP(other.HP), AD(other.AD), mana(other.mana){};
		ClapTrap &operator=(ClapTrap const &other){this->name = other.name; this->HP = other.HP; this->mana = other.mana; this->AD = other.AD; return *this; }
		virtual ~ClapTrap();
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif
