#include "Animal.hpp"

Animal::Animal( void ){
	this->type = "Default name";
	std::cout << "Animal Default Constructor Called" << std::endl;
}

Animal::~Animal( void ){
	std::cout << "Animal Destructor Called"<< std::endl;
}

Animal::Animal(const std::string type){
	this->type = type;
	std::cout << "Animal Param Constructor Called"<< std::endl;
}

Animal& Animal::operator=(const Animal &original){
	if ( this != &original ) {
		std::string tempType = original.getType();  
		this->type = tempType;
		std::cout << "Animal Assignment Operator Overloaded"<< std::endl;
		}
	return *this;
}

Animal::Animal(const Animal& toCopy){
	*this = toCopy;
	std::cout << "Animal Copy Constructor Called" <<std::endl;
}

void Animal::makeSound( void ) const{
	std::cout << "The animal makes a sound." << std::endl;
}

std::string Animal::getType( void ) const {
	return this->type;
}