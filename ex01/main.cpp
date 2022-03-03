#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <stdlib.h>

int	main() {
    Animal* j = new Dog();
    Animal* i = new Cat();
	Animal *animal[2];
	animal[0] = j;
	animal[1] = i;
	animal[0]->makeSound();
	animal[1]->makeSound();
	std::cout << animal[0]->getType() << "'s idea 1 is " << animal[0]->getBrain()->getIdeas(1) << std::endl;
	std::cout << animal[1]->getType() << "'s idea 1 is " << animal[1]->getBrain()->getIdeas(1) << std::endl;
	delete j;
	delete i;
	system("leaks brain");
}
