#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
	this->type = "WrongDefault";
	std::cout << "Wrong Animal default constructor Called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type){
	this->type = type;
	std::cout << "Wrong Animal param Constructor Called" << std::endl;
}

WrongAnimal::~WrongAnimal(){
	std::cout << "Wrong Animal Destructor Called" << std::endl;
}

void WrongAnimal::makeSound() const {
	std::cout << this->type <<" makes a WrongSound."<< std::endl;  // This is wrong, but it works for now...
}