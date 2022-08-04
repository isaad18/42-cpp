#include"ClapTrap.hpp"

int main(){
	ClapTrap trap("omar", 10, 10, 0);
	trap.attack("no one");
	trap.takeDamage(5);
	trap.takeDamage(5);
}
