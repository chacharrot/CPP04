#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	_brain = new Brain();
	_brain->setIdeas("cat");
	std::cout << "Cat default constructor " << this << std::endl;
}
Cat::Cat(std::string type) : Animal(type)
{
	_brain = new Brain();
	_brain->setIdeas("cat");
	std::cout << "Cat type constructor " << this << std::endl;
}

Cat::Cat(Cat const &other)
{
	_brain = new Brain(*other._brain);
	this->_type = other._type;
	std::cout << "Cat copy constructor " << this << std::endl;
}

Cat::~Cat()
{
	delete _brain;
	std::cout << "Cat Destructor " << this << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Maw maw. Maaawww" << std::endl;
}

Brain* Cat::getBrain()
{
	return _brain;
}

Cat & Cat::operator = (Cat const &other)
{
	_brain = new Brain(*other._brain);
	this->_type = other._type;
	return *this;
}

