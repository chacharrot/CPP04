#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>

#include "Brain.hpp"

class Animal
{
	protected:
		std::string _type;
	public:
		Animal();
		Animal(std::string type);
		Animal(Animal const &other);
		virtual ~Animal();

		virtual void makeSound() const = 0;
		virtual Brain *getBrain();
		std::string getType () const;

		Animal & operator = (Animal const &other);
};

#endif
