#include "main.hpp"

Harl::Harl(void){init();}

void Harl::error(void){std::cout << "[ERROR]\nThis is unacceptable! I want to speak to the manager now.\n" << std::endl;}

void Harl::info(void){std::cout << "[INFO]\nI cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n" << std::endl;}

void Harl::warning(void){std::cout << "[WARNING]\nI think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n" << std::endl;}

void Harl::debug(void){std::cout << "[DEBUG]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!\n" << std::endl;}

void Harl::complain(std::string level){
			bool ok = false;
			for (int i = 0; i < 4; i++)
				if(level == data[i].name){
					ok = true;
					switch(i){
						case 0:
							(this->*(data[0].ptr))();
						case 1:
							(this->*(data[1].ptr))();
						case 2:
							(this->*(data[2].ptr))();
						case 3:
							(this->*(data[3].ptr))();
					}
				}
			if (ok == false) { std::cout << "[ Probably complaining about insignificant problems ]" << std::endl; }
		}

int main(int argc, char **argv){
	Harl annoy = Harl();
	if (argc == 2)
		annoy.complain(argv[1]);
	return (0);
}

void Harl::init(){
	data[0].name = "DEBUG";
	data[1].name = "INFO";
	data[2].name = "WARNING";
	data[3].name = "ERROR";
	data[0].ptr = &Harl::debug;
	data[1].ptr = &Harl::info;
	data[2].ptr = &Harl::warning;
	data[3].ptr = &Harl::error;
}
