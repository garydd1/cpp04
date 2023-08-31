#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

WrongCat::WrongCat():WrongAnimal("WrongCat"){
	std::cout << "Wrong Cat Default constructor called." << std::endl;
}

WrongCat::~WrongCat(){
	std::cout << "WrongCat destructor called." << std::endl;
}

void WrongCat::makeSound() const{
	std::cout << "WrongCatMIAU!" << std::endl;
}