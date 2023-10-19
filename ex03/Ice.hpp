#ifndef ICE_HPP
#define ICE_HPP
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice: public AMateria{
public:
	Ice( void );
	~Ice( void );
	Ice(const Ice& toCopy);
	Ice& operator=(const Ice& original);
	AMateria* clone() const;
	void use(ICharacter& target);

private:
};




#endif