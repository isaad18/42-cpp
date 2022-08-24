#include "animal.hpp"
#include "dog.hpp"
#include "cat.hpp"
#include "brain.hpp"

int main() {
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
// Brain ll;
// std::cout << ll.get_random_idea() << std::endl;
// std::cout << ll.get_random_idea() << std::endl;
// std::cout << ll.get_random_idea() << std::endl;
// i = j;

Cat cat;
cat = cat;
std::cout << j->getType() << std::endl;
std::cout << i->getType() << std::endl;
std::cout << i->getIdea() << std::endl;
std::cout << i->getIdea() << std::endl;
std::cout << i->getIdea() << std::endl;
i->makeSound();
meta->makeSound();
delete i;
delete j;
delete meta;
return 0; }
