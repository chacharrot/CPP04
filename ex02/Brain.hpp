#ifndef Brain_HPP
#define Brain_HPP
#include <iostream>

class Brain
{
	private:
		std::string ideas[100];
	public:
		Brain();
		Brain(Brain const &other);
		~Brain();
		Brain & operator = (Brain const &other);

		std::string getIdeas (int i);
		void		setIdeas(std::string think);
};

#endif