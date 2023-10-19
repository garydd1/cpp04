#ifndef MATTERIASOURCE_HPP
#define MATTERIASOURCE_HPP
#include "AMateria.hpp"
#include "IMateriaSource.hpp"
#include "Character.hpp"

class MateriaSource: public IMateriaSource
{
public:

	MateriaSource( void );
	MateriaSource(MateriaSource const & toCopy);
	MateriaSource& operator=(MateriaSource const & original);
	~MateriaSource( void );
	void learnMateria(AMateria* toLearn);
	AMateria* createMateria(std::string const & type);

private:

	AMateria* _MateriaInventory[4];
};

#endif