#ifndef Dog_HPP
# define Dog_HPP

#include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog();
		Dog(std::string type);
		Dog(Dog const &other);
		~Dog();
		Dog & operator = (Dog const &other);

		void makeSound() const;
};

#endif
