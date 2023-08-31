#include "Animal.hpp"
#include "Cat.hpp"

Cat::Cat( void ):Animal("Cat"){
	std::cout << "Cat default Constructor Called" << std::endl;
}

Cat::~Cat(){
	std::cout << "Cat Destructor Called" << std::endl;
}

void Cat::makeSound() const {
	std::cout << "Meow!" << std::endl;
}