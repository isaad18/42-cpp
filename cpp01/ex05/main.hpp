#ifndef MAIN_HPP
#define MAIN_HPP

#include <iostream>
#include <string>

class Harl{
	typedef struct s_data{
		std::string name;
		void(Harl::*ptr)(void);
	}   t_data;
	private:
		t_data data[4];
		void debug(void){std::cout << "[DEBUG]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!\n" << std::endl;}
		void warning(void){std::cout << "[WARNING]\nI think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n" << std::endl;}
		void info(void){std::cout << "[INFO]\nI cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n" << std::endl;}
		void error(void){std::cout << "[ERROR]\nThis is unacceptable! I want to speak to the manager now.\n" << std::endl;}
	public:
		Harl(void);
		void init(void);
		void complain(std::string level){
			for (int i = 0; i < 4; i++)
				if(level == data[i].name)
					(this->*(data[i].ptr))();
		}
};

#endif