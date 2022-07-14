#include "Zombie.hpp"

void Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::destroy(void){
	std::cout << "destroyed: " << name << std::endl;
}