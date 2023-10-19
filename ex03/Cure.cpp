#include "Cure.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>

Cure::Cure( void ):AMateria("cure"){
	// std::cout << "Cure default Constructor Called" << std::endl;
}

Cure::~Cure(){
	// std::cout << "Cure Destructor Called" << std::endl;
}

Cure::Cure(const Cure& toCopy):AMateria(toCopy){
	// std::cout << "Cure Copy Constructor Called" << std::endl;
}

Cure& Cure::operator=(const Cure& original){
	// std::cout << "Cure Assignment Operator Called" << std::endl;
	if (this == &original)
		return (*this);
	return (*this);
}

AMateria* Cure::clone() const{
	// std::cout << "Cure Clone Called" << std::endl;
	return (new Cure());
}

void Cure::use(ICharacter& target){
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}