#include "main.hpp"

Harl::Harl(void){init();}

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