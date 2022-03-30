#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main()
{
//	const Animal* meta = new Animal();
//	const Animal* i = new Cat();
//	const Animal* j = new Dog();
	int	k = 0;
//
//	std::cout << j->getType() << " " << std::endl;
//	std::cout << i->getType() << " " << std::endl;
//	 //will output the cat sound!
//	meta->makeSound();

	while (k < 10)
	{
		if ((k % 2) == 1)
		{
			const Animal *j = new Dog();
			j->makeSound();
			delete j;
		}
		else
		{
			const Animal *i = new Cat();
			i->makeSound();
			delete i;
		}
		k++;
	}

	return 0;
}
