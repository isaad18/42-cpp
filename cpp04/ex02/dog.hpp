#ifndef DOG_HPP
#define DOG_HPP

#include <string>
#include <iostream>
#include "animal.hpp"
#include "brain.hpp"

class Dog: virtual public Animal {
	private:
		Brain idea;
		std::string own_type;
	public :
		Dog();
		Dog(Dog const& other);
		virtual ~Dog();
		Dog &operator=(Dog const &other);
		std::string think(){return (idea.get_random_idea());}
		void makeSound() const;
};

#endif
