#include "Cat.hpp"

//________________________________________________________________________//
//Cat//

Cat::Cat(){
	this->type = "Cat";
	std::cout << "type: " << this->type << " has been constructed" << std::endl;
}

Cat::Cat(Cat const& other): Animal(){
	this->type = other.type;
	std::cout << "type: " << this->type << " has been constructed" << std::endl;
}

Cat::~Cat()
{std::cout << "Animal " << type << "was destroyed." << std::endl;}

Cat &Cat::operator=(Cat const &other)
{this->type = other.type; return *this;}

void Cat::makeSound() const
{
	std::cout << "meeeooowwwwwwwwwwwww!!!" << std::endl;
}
