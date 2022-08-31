#ifndef DOG_HPP
#define DOG_HPP

#include <string>
#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog: virtual public Animal {
	private:
		Brain *idea;
		std::string own_type;
	public :
		Dog();
		Dog(Dog const& other);
		virtual ~Dog();
		Dog &operator=(Dog const &other);
		std::string getIdea() const;
		void makeSound() const;
};

#endif
