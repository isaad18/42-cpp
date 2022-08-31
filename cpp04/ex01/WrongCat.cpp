#include "WrongCat.hpp"

WrongCat::WrongCat(){
	this->type = "WrongCat";
	std::cout << "type: " << this->type << " has been constructed" << std::endl;
}

WrongCat::WrongCat(WrongCat const& other): WrongAnimal(){
	this->type = other.type;
	std::cout << "type: " << this->type << " has been constructed" << std::endl;
}

WrongCat::~WrongCat()
{std::cout << "Animal " << type << "was destroyed." << std::endl;}

WrongCat &WrongCat::operator=(WrongCat const &other)
{this->type = other.type; return *this;}

void WrongCat::makeSound() const
{
	std::cout << "meeeooowwwwwwwwwwwww!!!" << std::endl;
}
