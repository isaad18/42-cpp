#ifndef DOG_HPP
#define DOG_HPP

#include <string>
#include <iostream>
#include "animal.hpp"

class Dog: virtual public Animal {
	private:
		std::string own_type;
	public :
		Dog();
		Dog(Dog const& other);
		virtual ~Dog();
		Dog &operator=(Dog const &other);
};

#endif
