#include "MateriaSource.hpp"
#include "AMateria.hpp"
#include "Character.hpp"

MateriaSource::MateriaSource( void )
{
	// std::cout << "MateriaSource default constructor called" << std::endl;
	for (int i = 0; i < 4; ++i) {
		_MateriaInventory[i] = NULL;
	}
};

MateriaSource::MateriaSource(MateriaSource const & toCopy)
{
	// std::cout << "MateriaSource copy constructor called" << std::endl;
	for (int i = 0; i < 4; ++i) {
		delete this->_MateriaInventory[i];
		if (toCopy._MateriaInventory[i])
			this->_MateriaInventory[i] = toCopy._MateriaInventory[i]->clone();
		else
			this->_MateriaInventory[i] = NULL;
	}
};

MateriaSource& MateriaSource::operator=(MateriaSource const & original)
{
	// std::cout << "MateriaSource assignation operator called" << std::endl;
	if (this == &original)
	{
		return (*this);
	}
	for (int i = 0; i < 4; ++i) {
		delete this->_MateriaInventory[i];
		if (original._MateriaInventory[i])
			this->_MateriaInventory[i] = original._MateriaInventory[i]->clone();
		else
			this->_MateriaInventory[i] = NULL;
	}
	return (*this);
};

MateriaSource::~MateriaSource( void )
{
	// std::cout << "MateriaSource destructor called" << std::endl;
	for (int i = 0; i < 4; ++i) {
		if (_MateriaInventory[i])
			delete _MateriaInventory[i];
	}
};

void MateriaSource::learnMateria(AMateria* toLearn)
{
	for (int i = 0; i < 4; ++i) {
		if (_MateriaInventory[i] == NULL)
		{
			_MateriaInventory[i] = toLearn->clone();
			delete toLearn;
			return ;
		}
	}
};

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; ++i) {
		//std::cout << "Materiatype[" << i << "] = " << _MateriaInventory[i]->getType() << std::endl;
		if (_MateriaInventory[i] && _MateriaInventory[i]->getType() == type)
		{
			//std::cout << "Materia created" << std::endl;
			return (_MateriaInventory[i]->clone());
		}
	}
	//std::cout << "Materia not found" << std::endl;
	return (NULL);
};

