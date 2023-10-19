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

Cat::Cat(const Cat& toCopy){
	std::cout << "Cat Copy Constructor Called" << std::endl;
	this->type = toCopy.type;
	this->brain = new Brain(*toCopy.brain);
}

Cat& Cat::operator=(const Cat& original){
	std::cout << "Cat Assignment Operator Called" << std::endl;
	if (this == &original)
		return (*this);
	this->type = original.type;
	delete this->brain;
	this->brain = new Brain(*original.brain);
	return (*this);
}

void Cat::makeSound() const {
	std::cout << "Meow!" << std::endl;
}