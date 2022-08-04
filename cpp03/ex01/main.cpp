#include"ClapTrap.hpp"
#include"ScavTrap.hpp"

int main(){
	ClapTrap trap("omar", 10, 10, 0);
	ScavTrap neww("emad", 100, 50, 20);
	trap.attack("no one");
	neww.Sattack("omar");
	trap.takeDamage(6);
	neww.StakeDamage(90);
	trap.takeDamage(5);
}
