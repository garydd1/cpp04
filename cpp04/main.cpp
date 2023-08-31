#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
int main ( void ){
	
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* k = new Cat();
	std::cout << j->getType() << " " <<std::endl;
	j->makeSound();
	k->makeSound();
	delete meta;
	delete j;
	delete k;
	const WrongAnimal* wMeta = new WrongAnimal();
	wMeta->makeSound();
	const WrongAnimal* wk = new WrongCat();
	wk->makeSound();
	delete wMeta;
	delete wk;
	return (0);
}