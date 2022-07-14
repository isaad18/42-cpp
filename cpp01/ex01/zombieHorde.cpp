#include "Zombie.hpp"

Zombie*    zombieHorde( int N, std::string name )
{
	Zombie zombie[N];
	zombiehorde *neww;

	for( int i = 0; i < N; i++ )
	{
		zombie[i].setName(name);
		zombie[i].announce();
		zombie[i].destroy();
	}
	neww->zombies = zombie;
	return(neww->zombies);
}