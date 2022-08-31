#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"

//________________________________________________________________________//
//Animal//

Animal::Animal():
type("none")
{}

std::string Animal::getType() const
{return this->type;}

void Animal::makeSound() const
{
	std::cout << "what does it sound like?" << std::endl;
}

Animal::Animal(Animal const& other): type(other.type)
{std::cout << "Animal " << type << " has been created" <<std::endl;}

Animal::~Animal()
{std::cout << "Animal " << type << "was destroyed." << std::endl;}

Animal &Animal::operator=(Animal const &other){this->type = other.type; return *this;}
