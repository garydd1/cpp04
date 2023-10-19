#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main ( void ){
	
	// Dog Basic;
	// Dog tmp = Basic;
	Animal* meta[10];
	for (int i = 0; i < 10; i++){
		if (i < 5)
			meta[i] = new Dog();
		else
			meta[i] = new Cat();
	}
	for (int i = 0; i < 10; i++){
		meta[i]->makeSound();
	}
	for (int i = 0; i < 10; i++){
		delete meta[i];
	}
	return (0);
}