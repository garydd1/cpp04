#include "Ice.hpp"
#include "AMateria.hpp"
#include <iostream>

Ice::Ice( void ):AMateria("ice"){
	// std::cout << "Ice default Constructor Called" << std::endl;
}

Ice::~Ice(){
	// std::cout << "Ice Destructor Called" << std::endl;
}

Ice::Ice(const Ice& toCopy):AMateria(toCopy){
	// std::cout << "Ice Copy Constructor Called" << std::endl;
}

Ice& Ice::operator=(const Ice& original){
	// std::cout << "Ice Assignment Operator Called" << std::endl;
	if (this == &original)
		return (*this);
	return (*this);
}

AMateria* Ice::clone() const{
	// std::cout << "Ice Clone Called" << std::endl;
	return (new Ice());
}

void Ice::use(ICharacter& target){
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}