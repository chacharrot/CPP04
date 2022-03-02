#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>

#include "Brain.hpp"

class Animal
{
	public:
		Animal();
		Animal(std::string type);
		Animal(Animal const &other);
		virtual ~Animal() = 0;

		virtual void makeSound() const;
		virtual Brain *getBrain();
		std::string getType () const;

		Animal & operator = (Animal const &other);
	protected:
		std::string _type;
};

#endif
