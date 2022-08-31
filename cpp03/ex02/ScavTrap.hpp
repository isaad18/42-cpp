#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap{
	private:
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const& other);
		ScavTrap &operator=(ScavTrap const &other);
		virtual ~ScavTrap();
		void guardGate();
};

#endif // !1
