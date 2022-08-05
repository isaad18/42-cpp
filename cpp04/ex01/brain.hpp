#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain{
	private:
		static const std::string ideas[100];
	public:
		Brain();
		Brain(Brain const& other);
		Animal &operator=(Animal const &other){}
		virtual ~Brain();
		void get_random_idea();
}
