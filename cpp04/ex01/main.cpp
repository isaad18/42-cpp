#include "animal.hpp"
#include "dog.hpp"
#include "cat.hpp"

int main() {
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
i = j;
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makeSound();
meta->makeSound();
delete new Cat();
delete new Dog();
delete new Animal();
return 0; }
