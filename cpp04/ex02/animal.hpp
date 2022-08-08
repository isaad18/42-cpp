#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>
#include "brain.hpp"

class Animal{
	protected:
		std::string type;
		const Brain ideas;
	public:
		Animal();
		Animal(Animal const& other);
		Animal(std::string new_type): type(new_type){}
		virtual ~Animal();
		Animal &operator=(Animal const &other){this->type = other.type; return *this;}
		void makeSound() const;
		std::string getIdea() const;
		std::string getType() const;
};

#endif
