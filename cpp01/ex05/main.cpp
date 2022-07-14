#include "main.hpp"


int main(int argc, char **argv){
	Harl annoy(void);
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