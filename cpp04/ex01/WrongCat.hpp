#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : virtual public WrongAnimal{
	private:
		std::string own_type;
	public :
		WrongCat();
		WrongCat(WrongCat const& other);
		virtual ~WrongCat();
		WrongCat &operator=(WrongCat const &other);
		void makeSound() const;
};

#endif
