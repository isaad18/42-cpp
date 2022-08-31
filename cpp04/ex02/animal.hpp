#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>
#include "Brain.hpp"

class Animal{
	protected:
		std::string type;
		const Brain ideas;
	public:
		Animal();
		Animal(Animal const& other);
		Animal(std::string new_type);
		virtual ~Animal();
		Animal &operator=(Animal const &other);
		virtual void makeSound() const=0;
		std::string getType() const;
};

#endif
