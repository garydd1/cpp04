#include "Dog.hpp"
#include "Animal.hpp"

Dog::Dog( void ):Animal("Dog") {
	std::cout << "Dog Default Constructor Called"<< std::endl;
	this->brain = new Brain();
}

Dog::~Dog( void ){
	std::cout << "Dog Destructor Called" << std::endl;
	delete this->brain; // delete the pointer to a brain object, not the actual object itself!
}

Dog::Dog(const Dog& toCopy){
	std::cout << "Dog Copy Constructor Called" << std::endl;
	this->type = toCopy.type;
	this->brain = new Brain(*toCopy.brain);
}

Dog& Dog::operator=(const Dog& original){
	std::cout << "Dog Assignment Operator Called" << std::endl;
	if (this == &original)
		return (*this);
	this->type = original.type;
	delete this->brain;
	this->brain = new Brain(*original.brain);
	return (*this);
}

void Dog::makeSound( void ) const{
	std::cout << "BARK!"<< std::endl;
}