#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
	Zombie* zombie;

	zombie->setName(name);
	zombie->announce();
	zombie->destroy();
	return(zombie);
}