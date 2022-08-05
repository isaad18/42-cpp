#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal{
	protected:
		std::string type;
	public:
		Animal();
		Animal(Animal const& other) : type(other.type){};
		Animal &operator=(Animal const &other){this->type = other.type; return *this;}
		virtual ~Animal(){std::cout << "Animal " << type << "was destroyed." << std::endl;}
		void makeSound() const;
		std::string getType() const;
};

#endif