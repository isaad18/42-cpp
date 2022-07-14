#include"Zombie.hpp"

Zombie* newZombie(std::string name);
void randomChump(std::string name);

int main(){
    newZombie("ahmad");
    newZombie("imad");
    randomChump("hamed");
    return 0;
}