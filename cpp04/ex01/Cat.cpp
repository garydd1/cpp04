#include "Animal.hpp"
#include "Brain.hpp"
#include "Cat.hpp"

Cat::Cat( void ):Animal("Cat"){
	std::cout << "Cat default Constructor Called" << std::endl;
	this->brain = new Brain();
}

Cat::~Cat(){
	std::cout << "Cat Destructor Called" << std::endl;
	delete this->brain; // delete the pointer to avoid memory leakage!
}

void Cat::makeSound() const {
	std::cout << "Meow!" << std::endl;
}