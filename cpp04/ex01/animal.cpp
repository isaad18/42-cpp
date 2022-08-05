#include "animal.hpp"
#include "dog.hpp"
#include "cat.hpp"

//________________________________________________________________________//
//Dog//

Dog::Dog(){
	this->type = "Dog";
	std::cout << "type: " << this->type << " has been constructed" << std::endl;
}

Dog::Dog(Dog const& other){
	this->type = other.type;
	std::cout << "type: " << this->type << " has been constructed" << std::endl;
}

Dog::~Dog(){std::cout << "Animal " << type << "was destroyed." << std::endl;}

Dog &Dog::operator=(Dog const &other)
{this->type = other.type; return *this;}

//________________________________________________________________________//
//Cat//

Cat::Cat(){
	this->type = "Cat";
	std::cout << "type: " << this->type << " has been constructed" << std::endl;
}

Cat::Cat(Cat const& other){
	this->type = other.type;
	std::cout << "type: " << this->type << " has been constructed" << std::endl;
}

Cat::~Cat()
{std::cout << "Animal " << type << "was destroyed." << std::endl;}

Cat &Cat::operator=(Cat const &other)
{this->type = other.type; return *this;}

//________________________________________________________________________//
//Brain//

Brain(){
	std::cout << "Brain has been constructed" << std::endl;
}

Brain(Brain const& other){
	std::cout << "Brain has been constructed" << std::endl;
}

Brain::~Brain(){
	std::cout << "Brain has been destroyed." << std::endl;
}

void get_random_idea(){
	static i;
	std::cout << this->ideas[i] << std::endl;
	i = (i + 1) % 99;
}

//________________________________________________________________________//
//Animal//

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

Animal::Animal(Animal const& other): type(other.type)
{std::cout << "Animal " << type << " has been created" <<std::endl;}

Animal::~Animal()
{std::cout << "Animal " << type << "was destroyed." << std::endl;}
