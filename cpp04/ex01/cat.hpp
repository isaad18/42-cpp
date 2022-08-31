#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : virtual public Animal{
	private:
		Brain *idea;
		std::string own_type;
	public :
		Cat();
		Cat(Cat const& other);
		virtual ~Cat();
		Cat &operator=(Cat const &other);
		std::string getIdea() const;
		void makeSound() const;
};

#endif
