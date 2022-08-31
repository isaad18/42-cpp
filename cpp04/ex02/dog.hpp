#ifndef DOG_HPP
#define DOG_HPP

#include <string>
#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal {
	private:
		Brain *idea;
	public :
		Dog();
		Dog(Dog const& other);
		virtual ~Dog();
		Dog &operator=(Dog const &other);
		void makeSound() const;
		std::string getIdea() const;
};

#endif
