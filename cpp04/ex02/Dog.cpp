#include "Dog.hpp"

//________________________________________________________________________//
//Dog//

Dog::Dog(){
	this->type = "Dog";
	this->idea = new Brain();
	std::cout << "type: " << this->type << " has been constructed" << std::endl;
}

Dog::Dog(Dog const& other): Animal(){
	this->type = other.type;
	this->idea = new Brain();
	std::cout << "type: " << this->type << " has been constructed" << std::endl;
}

Dog::~Dog(){std::cout << "Animal " << type << "was destroyed." << std::endl;
delete this->idea;}

Dog &Dog::operator=(Dog const &other)
{this->type = other.type;
this->idea = new Brain();
return *this;}

void Dog::makeSound() const{
	std::cout << "wooofffff wooooofffff!!!" << std::endl;
}
