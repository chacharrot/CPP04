#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog default constructor " << this << std::endl;
}
Dog::Dog(std::string type) : Animal(type)
{
	std::cout << "Dog type constructor " << this << std::endl;
}

Dog::Dog(Dog const &other)
{
	std::cout << "Dog copy constructor " << this << std::endl;
	this->_type = other._type;
}

Dog::~Dog()
{
	std::cout << "Destructor for Dog class " << this <<  std::endl;
}

void Dog::makeSound() const
{
	std::cout << "baw wow, baw wow" << std::endl;
}

Dog & Dog::operator = (Dog const &other)
{
	this->_type = other._type;
	return *this;
}

