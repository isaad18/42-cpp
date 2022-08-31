#include"Zombie.hpp"

Zombie* newZombie(std::string name);
void randomChump(std::string name);

int main(){
    Zombie *z;
    z = newZombie("ahmad");
    newZombie("imad");
    randomChump("hamed");
    delete z;
    return 0;
}
