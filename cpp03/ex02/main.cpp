#include"ClapTrap.hpp"
#include"ScavTrap.hpp"

int main(){
	ClapTrap trap("omar");
	ScavTrap neww("emad");
	trap.attack("no one");
	neww.Sattack("omar");
	trap.takeDamage(6);
	neww.StakeDamage(90);
	trap.takeDamage(5);
}
