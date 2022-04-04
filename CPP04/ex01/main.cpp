#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main()
{
	{
		std::cout << "** Leak Detection **\n\n";
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		delete j;  // should not create a leak
		delete i;
	}
	{
		std::cout << "\n** Array of Animals Test **\n\n";
		Animal* animals[4] = {new Dog(), new Dog(), new Cat("cat1"),
							  new Cat("cat2")};
		for (int i = 0; i < 4; i++)
			animals[i]->makeSound();
		for (int i = 0; i < 4; i++)
			delete animals[i];
	}
	{
		std::cout << "\n** Deep Copy Test **\n\n";
		{
			Animal* dogAnimal = new Dog();
			Dog dogCopy(*(Dog*)dogAnimal);
			delete dogAnimal;
			dogCopy.makeSound();
			std::cout << "dogCopy's brain copied from dogAnimal=>\n" << dogCopy.getBrain() << "\n";
		}
		std::cout << "";
		{
			Animal* catAnimal = new Cat("CatAnimal");
			Cat catCopy("BeforeCopyCat");
			catCopy = (*(Cat*)catAnimal);
			delete catAnimal;
			catCopy.makeSound();
			std::cout << "catCopy's brain copied from catAnimal=>\n" << catCopy.getBrain() << "\n";
		}
	}
	return 0;
}
