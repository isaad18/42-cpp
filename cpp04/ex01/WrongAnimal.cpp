#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal():
type("none")
{}

std::string WrongAnimal::getType() const
{return this->type;}

void WrongAnimal::makeSound() const
{
	std::cout << "what does it sound like?" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const& other): type(other.type)
{std::cout << "WrongAnimal " << type << " has been created" <<std::endl;}

WrongAnimal::~WrongAnimal()
{std::cout << "WrongAnimal " << type << "was destroyed." << std::endl;}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &other){this->type = other.type; return *this;}
