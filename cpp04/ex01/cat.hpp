#ifndef CAT_HPP
#define CAT_HPP

#include "animal.hpp"

class Cat : virtual public Animal{
	private:
		std::string own_type;
	public :
		Cat();
		Cat(Cat const& other);
		virtual ~Cat();
		Cat &operator=(Cat const &other);
};

#endif
