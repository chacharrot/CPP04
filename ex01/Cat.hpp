#ifndef Cat_HPP
#define Cat_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain *_brain;
	public:
		Cat();
		Cat(std::string addType);
		Cat(Cat const &other);
		~Cat();

		void makeSound() const;
		Brain* getBrain();
		Cat & operator = (Cat const &other);
};

#endif
