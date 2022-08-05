#include "animal.hpp"
#include "dog.hpp"
#include "cat.hpp"

Dog::Dog(){
	this->type = "Dog";
}

Dog::Dog(Dog const& other){
	this->type = other.type;
}

Cat::Cat(){
	this->type = "Cat";
}

Cat::Cat(Cat const& other){
	this->type = other.type;
}

Animal::Animal():
type("none")
{}

std::string Animal::getType() const
{return this->type;}

void Animal::makeSound() const
{
	if (this->type == "Cat")
		std::cout << "meowwwwwwwwwwwwwwwww!!!!!!" << std::endl;
	else if (this->type == "Dog")
		std::cout << "wooofffff wooooofffff!!!" << std::endl;
	else
		std::cout << "what does it sound like?" << std::endl;
}