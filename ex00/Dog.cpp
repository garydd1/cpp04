#include "Dog.hpp"
#include "Animal.hpp"

Dog::Dog( void ):Animal("Dog") {
	std::cout << "Dog Default Constructor Called"<< std::endl;
}

Dog::~Dog( void ){
	std::cout << "Dog Destructor Called" << std::endl;
}

void Dog::makeSound( void ) const{
	std::cout << "BARK!"<< std::endl;
}