#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

//________________________________________________________________________//
//Animal//

std::string Cat::getIdea() const{
	return idea->get_random_idea();
}

std::string Dog::getIdea() const{
	return idea->get_random_idea();
}

Animal::Animal():
type("none")
{}

std::string Animal::getType() const
{return this->type;}

Animal::Animal(Animal const& other): type(other.type)
{std::cout << "Animal " << type << " has been created" <<std::endl;}

Animal::~Animal()
{std::cout << "Animal " << type << "was destroyed." << std::endl;}

Animal &Animal::operator=(Animal const &other){this->type = other.type; return *this;}

Animal::Animal(std::string new_type): type(new_type){}
