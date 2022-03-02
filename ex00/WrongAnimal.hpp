#ifndef WrongAnimal_HPP
#define WrongAnimal_HPP
#include <iostream>

class WrongAnimal
{
	protected:
		std::string _type;
	public:
		WrongAnimal();
		WrongAnimal(std::string addType);
		WrongAnimal(WrongAnimal const &other);
		virtual ~WrongAnimal();
		WrongAnimal & operator = (WrongAnimal const &other);

		void makeSound() const;
		std::string getType () const;
};

#endif
