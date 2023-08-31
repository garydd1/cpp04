#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
int main ( void ){
	
	Animal* meta = new Animal[100];
	
	meta[0] = Dog();
	return (0);
}