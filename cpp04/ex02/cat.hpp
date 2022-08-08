#ifndef CAT_HPP
#define CAT_HPP

#include "animal.hpp"
#include "brain.hpp"

class Cat : virtual public Animal{
	private:
		Brain idea;
		std::string own_type;
	public :
		Cat();
		Cat(Cat const& other);
		virtual ~Cat();
		Cat &operator=(Cat const &other);
		void makeSound() const;
};

#endif
