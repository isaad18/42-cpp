#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main()
{
	Animal *animals[10];
	Animal *dogggg = new Dog();
	Animal *cat = new Cat();
	dogggg->makeSound();
	cat->makeSound();

	Animal *test;
	test = cat;
	test->makeSound();

	for(int i = 0; i < 10; i++)
	{
		if(i < 5)
			animals[i] = new Cat();
		else
			animals[i] = new Dog();
	}
	for(int i = 0; i < 10; i++)
	{
		animals[i]->makeSound();
	}
	for(int i = 0; i < 10; i++)
	{
		delete animals[i];
	}
	delete dogggg;
	delete cat;
	return 0;
}
