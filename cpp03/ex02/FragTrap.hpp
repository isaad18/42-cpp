#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class FragTrap : virtual public ClapTrap {
	private:
		static const int hi5guys = 5;
		static std::string ADmsg[hi5guys];
	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(FragTrap const& other);
		FragTrap &operator=(FragTrap const &other);
		virtual ~FragTrap();
		void highFivesGuys(void);
};

#endif
