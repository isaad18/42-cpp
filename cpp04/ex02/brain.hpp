#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain{
	private:
		static const int i = 100;
		static std::string ideas[i];
	public:
		Brain();
		Brain(Brain const& other);
		Brain &operator=(Brain const &other){return *this;}
		virtual ~Brain();
		std::string get_random_idea() const;
};

#endif
