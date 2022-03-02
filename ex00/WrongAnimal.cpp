#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("")
{
	std::cout << "WrongAnimal default constructor " << this << std::endl;
}
WrongAnimal::WrongAnimal(std::string type) : _type(type)
{
	std::cout << "WrongAnimal type constructor " << this << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &other)
{
	std::cout << "WrongAnimal copy constructor " << this << std::endl;
	this->_type = other._type;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor " << this << std::endl;
}

std::string WrongAnimal::getType() const
{
	return this->_type;
}

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal: - I don't have any voice!" << std::endl;
}

WrongAnimal & WrongAnimal::operator = (WrongAnimal const &other)
{
	this->_type = other._type;
	return *this;
}

