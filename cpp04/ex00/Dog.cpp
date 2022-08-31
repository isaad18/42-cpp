#include "Dog.hpp"

//________________________________________________________________________//
//Dog//

Dog::Dog(){
	this->type = "Dog";
	std::cout << "type: " << this->type << " has been constructed" << std::endl;
}

Dog::Dog(Dog const& other): Animal(){
	this->type = other.type;
	std::cout << "type: " << this->type << " has been constructed" << std::endl;
}

Dog::~Dog(){std::cout << "Animal " << type << "was destroyed." << std::endl;}

Dog &Dog::operator=(Dog const &other)
{this->type = other.type; return *this;}

void Dog::makeSound() const
{
	std::cout << "wwooooooooooofffffff!!" << std::endl;
}
