#ifndef Brain_HPP
#define Brain_HPP
#include <iostream>

class Brain
{
	public:
		Brain();
		Brain(Brain const &other);
		~Brain();
		Brain & operator = (Brain const &other);

		std::string getIdeas (int i);
		void		setIdeas(std::string think);
	private:
		std::string ideas[100];
};

#endif