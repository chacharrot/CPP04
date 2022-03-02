#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	std::cout << "WrongCat default constructor " << this <<  std::endl;
}
WrongCat::WrongCat(std::string type) : WrongAnimal(type)
{
	this->_type = type;
	std::cout << "WrongCat type constructor " << this <<  std::endl;
}

WrongCat::WrongCat(WrongCat const &other)
{
	std::cout << "WrongCat copy constructor " << this <<  std::endl;
	this->_type = other._type;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor " << this <<  std::endl;
}

void WrongCat::makeSound() const {
	std::cout << "Miau miau. Mrrrr" << std::endl;
}

WrongCat & WrongCat::operator = (WrongCat const &other)
{
	this->_type = other._type;
	return *this;
}

