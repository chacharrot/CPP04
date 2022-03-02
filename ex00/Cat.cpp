#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat default constructor " << this << std::endl;
}
Cat::Cat(std::string type) : Animal(type)
{
	std::cout << "Cat type constructor " << this << std::endl;
}

Cat::Cat(Cat const &other)
{
	this->_type = other._type;
	std::cout << "Cat copy constructor " << this << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat Destructor " << this << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "maw maw, maw maw" << std::endl;
}

Cat & Cat::operator = (Cat const &other)
{
	this->_type = other._type;
	return *this;
}

