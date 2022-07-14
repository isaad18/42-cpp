#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon{
	private:
		std::string Wname;
	public:
		Weapon(std::string name);
		void setType(std::string newname);
		std::string getType();
};

#endif