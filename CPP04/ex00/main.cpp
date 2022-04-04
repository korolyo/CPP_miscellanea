#include "Animal.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"

int main()
{
	{
	const Animal *meta = new Animal();
	const Animal *i = new Cat();
	const Animal *j = new Dog();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	delete meta;
	delete i;
	delete j;
	}
	{
		std::cout << "\n--- WrongAnimal ---\n";
		const WrongAnimal* meta = new WrongAnimal();
		const WrongAnimal* i = new WrongCat();
		std::cout << "\n";
		std::cout << "type of meta is " << meta->getType() << "\n";
		std::cout << "type of i is " << i->getType() << "\n";
		std::cout << "\n";
		i->makeSound();  // will output the wrong animal sound!
		meta->makeSound();
		std::cout << "\n";
		delete i;
		delete meta;
	}
	return 0;
}
