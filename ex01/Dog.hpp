#ifndef Dog_HPP
#define Dog_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain *_brain;
	public:
		Dog();
		Dog(std::string addType);
		Dog(Dog const &other);
		~Dog();

		void makeSound() const;
		Brain* getBrain();
		Dog & operator = (Dog const &other);
};

#endif
