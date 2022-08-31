#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal{
	private:
		Brain *idea;
	public :
		Cat();
		Cat(Cat const& other);
		virtual ~Cat();
		Cat &operator=(Cat const &other);
		void makeSound() const;
		std::string getIdea() const;
};

#endif
