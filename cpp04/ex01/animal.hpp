#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>
#include "Brain.hpp"

class Animal{
	protected:
		std::string type;
	public:
		Animal();
		Animal(Animal const& other);
		virtual ~Animal();
		Animal &operator=(Animal const &other);
		virtual void makeSound() const;
		std::string getType() const;
};

#endif
