#include "AMateria.hpp"

AMateria::AMateria( void ):_type(""){
	// std::cout << "AMateria default Constructor Called" << std::endl;
}

AMateria::AMateria(std::string const& type):_type(type){
	// std::cout << "AMateria Param Constructor Called" << std::endl;
}

AMateria::~AMateria(){
	// std::cout << "AMateria Destructor Called" << std::endl;
}

AMateria::AMateria(const AMateria& toCopy){
	// std::cout << "AMateria Copy Constructor Called" << std::endl;
	this->_type = toCopy._type;
}

AMateria& AMateria::operator=(const AMateria& original){
	// std::cout << "AMateria Assignment Operator Called" << std::endl;
	if (this == &original)
		return (*this);
	this->_type = original._type;
	return (*this);
}

std::string const& AMateria::getType() const{
	return (this->_type);
}

void AMateria::use(ICharacter& target){

}





