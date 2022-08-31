#include"Zombie.hpp"

Zombie*    zombieHorde(int N, std::string name);
void randomChump(std::string name);

int main(){
    Zombie *Horde = zombieHorde(2, "ahmad");
	delete [] Horde;
    return 0;
}
