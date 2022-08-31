#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"
#include "Brain.hpp"

int main()
{
	Animal *animal[10];
	for (int i = 0; i < 10; i++)
	{
		animal[i] = new Cat();
	}
	for (int i = 0; i < 10; i++)
	{
		delete (animal[i]);
	}
	Cat* j = new Cat();
	// Dog dog("Dog");
	j->makeSound();
	// j->setIdea("my Ideas2");
	std::cout << j->getIdea() << std::endl;
	std::cout << j->getIdea() << std::endl;
	std::cout << j->getIdea() << std::endl;
	Cat catsecond =Cat(*j);
	// catsecond = j;
	delete (j);
	std::cout << catsecond.getIdea() << std::endl;
	catsecond.makeSound();
	Dog* a = new Dog();
	// Dog dog("Dog");
	a->makeSound();
	// j->setIdea("my Ideas2");
	std::cout << a->getIdea() << std::endl;
	std::cout << a->getIdea() << std::endl;
	std::cout << a->getIdea() << std::endl;
	Dog Dogsecond = Dog(*a);
	// Dogsecond = j;
	delete (a);
	std::cout << Dogsecond.getIdea() << std::endl;
	Dogsecond.makeSound();
	 // dog.makeSound();
}
