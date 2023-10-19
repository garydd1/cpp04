#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character: public ICharacter {
public:

	Character( void );
	Character(std::string const& name);
	~Character( void );
	Character(const Character& toCopy);
	Character& operator=(const Character& original);
	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);

private:

	AMateria* _inventory[4];
	std::string _name;
	AMateria* _unequipped[100];
	
};

#endif




