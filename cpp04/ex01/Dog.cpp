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

void Dog::makeSound( void ) const{
	std::cout << "BARK!"<< std::endl;
}