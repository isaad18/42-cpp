#ifndef DOG_HPP
#define DOG_HPP

#include <string>
#include <iostream>
#include "animal.hpp"

class Dog: virtual public Animal {
	private:
	public :
		Dog();
		Dog(Dog const& other);
		Dog &operator=(Dog const &other){this->type = other.type; return *this;}
		virtual ~Dog(){std::cout << "Animal " << type << "was destroyed." << std::endl;}
};

#endif