#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal{
	protected:
		std::string type;
	public:
		Animal();
		Animal(Animal const& other);
		virtual ~Animal();
		Animal &operator=(Animal const &other){this->type = other.type; return *this;}
		void makeSound() const;
		std::string getType() const;
};

#endif
