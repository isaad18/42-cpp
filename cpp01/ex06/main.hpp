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
		void debug(void);
		void warning(void);
		void info(void);
		void error(void);
	public:
		Harl(void);
		void init(void);
		void complain(std::string level);
};

#endif
