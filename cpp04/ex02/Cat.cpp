#include "Cat.hpp"

//________________________________________________________________________//
//Cat//

Cat::Cat(){
	this->type = "Cat";
	this->idea = new Brain();
	std::cout << "type: " << this->type << " has been constructed" << std::endl;
}

Cat::Cat(Cat const& other): Animal(){
	this->type = other.type;
	this->idea = new Brain();
	std::cout << "type: " << this->type << " has been constructed" << std::endl;
}

Cat::~Cat()
{std::cout << "Animal " << type << "was destroyed." << std::endl;
delete this->idea;}

Cat &Cat::operator=(Cat const &other)
{this->type = other.type;
this->idea = new Brain();
return *this;}

void Cat::makeSound() const{
	std::cout << "meowwwwwwwwwwwwwwwww!!!!!!" << std::endl;
}
