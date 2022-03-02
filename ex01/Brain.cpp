#include "Brain.hpp"

Brain::Brain()
{
	for (int i = 0; i < 100; i++)
		ideas[i] = "some thougths of ";
	std::cout << "Brain default constructor " << this << std::endl;
}

Brain::Brain(Brain const &other)
{
	std::cout << "Brain copy constructor " << this << std::endl;
	for (int i = 0; i < 100; i++)
		ideas[i] = other.ideas[i];
}

Brain::~Brain()
{
	std::cout << "Brain destructor " << this << std::endl;
}

std::string Brain::getIdeas(int i)
{
	if (i < 0 || i > 99)
		return "Error";
	else
		return ideas[i];
}
void	Brain::setIdeas(std::string think)
{
	for (int i = 0; i < 100; i++)
		ideas[i] += think;
}


Brain & Brain::operator = (Brain const &other)
{
	for (int i = 0; i < 100; i++)
		ideas[i] = other.ideas[i];
	return *this;
}

