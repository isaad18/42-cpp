#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include<iostream>
#include<string>

class Zombie{
	private:
		std::string name;
	public:
		virtual ~Zombie();
		void setName(std::string newName) { name = newName.c_str(); }
		void announce(void);
};

#endif
