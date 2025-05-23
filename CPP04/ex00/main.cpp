

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	{

	const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); // will output the cat sound!
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete j; // Destructor  dog

	delete i; // Destructor  cat
	}

	std::cout << "----------------------------------" << std::endl;
	//  test for not using   keyword virtual   ....
	// {

	// const WrongAnimal *meta = new WrongAnimal();
	// const WrongAnimal *i = new WrongCat();
	// std::cout << i->getType() << " +++" << std::endl;
	// i->makeSound(); 
	// meta->makeSound();

	// delete meta;  Destructor   wrongAnimal

	// delete i; // Destructor  wrongcat
	// }
	
}