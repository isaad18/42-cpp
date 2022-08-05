#ifndef CAT_HPP
#define CAT_HPP

#include "animal.hpp"

class Cat : virtual public Animal{
    private:
	public :
		Cat();
		Cat(Cat const& other);
		Cat &operator=(Cat const &other){this->type = other.type; return *this;}
		virtual ~Cat(){std::cout << "Animal " << type << "was destroyed." << std::endl;}
};

#endif