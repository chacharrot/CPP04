#include "Animal.hpp"

Animal::Animal() : _type("")
{
	std::cout << "Animal default constructor " << this << std::endl;
}

Animal::Animal(std::string type) : _type(type)
{
	std::cout << "Animal type constructor " << this << std::endl;
}

Animal::Animal(Animal const &other)
{
	std::cout << "Animal copy constructor " << this << std::endl;
	this->_type = other._type;
}

Animal::~Animal()
{
	std::cout << "Animal destructor " << this << std::endl;
}

std::string Animal::getType() const
{
	return this->_type;
}

void Animal::makeSound() const
{
	std::cout << "Animal: - I don't have any voice!" << std::endl;
}

Animal & Animal::operator = (Animal const &other)
{
	this->_type = other._type;
	return *this;
}

