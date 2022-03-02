#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	_brain = new Brain();
	_brain->setIdeas("dog");
	std::cout << "Dog default constructor " << this << std::endl;
}
Dog::Dog(std::string type) : Animal(type)
{
	_brain = new Brain();
	_brain->setIdeas("dog");
	std::cout << "Dog type constructor " << this << std::endl;
}

Dog::Dog(Dog const &other)
{
	std::cout << "Dog copy constructor " << this << std::endl;
	_brain = new Brain(*other._brain);
	this->_type = other._type;
}

Dog::~Dog()
{
	std::cout << "Dog destructor " << this << std::endl;
	delete _brain;
}

void Dog::makeSound() const
{
	std::cout << "Baw wow, Baw wow." << std::endl;
}

Brain* Dog::getBrain()
{
	return _brain;
}


Dog & Dog::operator = (Dog const &other)
{
	_brain = new Brain(*other._brain);
	this->_type = other._type;
	std::cout << "Dog operator =" << std::endl;
	return *this;
}

