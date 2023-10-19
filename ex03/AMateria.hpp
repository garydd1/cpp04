#ifndef AMATERIA_HPP
#define AMATERIA_HPP
#include <iostream>
#include <string>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
public:

AMateria();
AMateria(std::string const & type);
AMateria(AMateria const & toCopy);
AMateria& operator=(AMateria const & original);
virtual ~AMateria();
std::string const& getType() const; //Returns the materia type
virtual AMateria* clone() const = 0;
virtual void use(ICharacter& target);

protected:
	std::string _type;

};

#endif