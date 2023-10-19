#include "Character.hpp"

Character::Character( void ) {
	// std::cout << "Character default constructor called" << std::endl;
	_name = "default";
	for (int i = 0; i < 4; ++i) {
		_inventory[i] = NULL;
	}
	for (int i = 0; i < 100; ++i) {
		_unequipped[i] = NULL;
	}

	return ;
}

Character::Character(std::string const & name): _name(name){
	// std::cout << "Character constructor called" << std::endl;
	for (int i = 0; i < 4; ++i) {
		_inventory[i] = NULL;
	}
	for (int i = 0; i < 100; ++i) {
		_unequipped[i] = NULL;
	}
	return ;
}

Character::~Character( void ) {
	// std::cout << "Character destructor called" << std::endl;
	for (int i = 0; i < 4; ++i) {
		if (_inventory[i]){
			// std::cout << "Deleting materia " << _inventory[i]->getType() << std::endl;
			delete _inventory[i];
		}
	}
	for (int i = 0; i < 100; ++i) {
		if (_unequipped[i])
			delete _unequipped[i];
	}
	return ;
}

//This need to be a deep copy
Character::Character(const Character& toCopy) {
	// std::cout << "Character copy constructor called" << std::endl;
	this->_name = toCopy._name;
	for (int i = 0; i < 4; ++i) {
		delete this->_inventory[i];
		if (toCopy._inventory[i])
			this->_inventory[i] = toCopy._inventory[i]->clone();
		else
			this->_inventory[i] = NULL;
	}
	return ;
}

//This need to be a deep copy
Character& Character::operator=(const Character& original) {
		
	// std::cout << "Character assignation operator called" << std::endl;
	if (this == &original)
	{
		return (*this);
	}
	this->_name = original._name;
	for (int i = 0; i < 4; ++i) {
		delete this->_inventory[i];
		if (original._inventory[i])
			this->_inventory[i] = original._inventory[i]->clone();
		else
			this->_inventory[i] = NULL;
	}
	return (*this);
}

void Character::equip(AMateria* m) {
    if (m) {
        for (int i = 0; i < 4; ++i) {
            if (!_inventory[i]) {
                _inventory[i] = m;
				// std::cout << "Materia " << m->getType() << " equipped. at slot "<< i << std::endl;
                return;
            }
        }
        std::cout << "Inventory is full. Can't equip more materia." << std::endl;
    } else {
        std::cout << "Invalid materia to equip." << std::endl;
    }
}

void Character::unequip(int idx) {
	if (idx < 0 || idx >= 4 || !_inventory[idx]) {
		std::cout << "Invalid index or no materia equipped at this slot." << std::endl;
		return;
	}
	//Manage to store the unequipped materia in a separate inventory
	for (int i = 0; i < 100; ++i) {
		if (!_unequipped[i]) {
			std::cout << "Materia " << _inventory[idx]->getType() << " unequipped. from slot; its now ON the floor!"<< idx << std::endl;
			_unequipped[i] = _inventory[idx];
			break;
		}
	}
	_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target) {
    if (idx < 0 || idx >= 4 || !_inventory[idx]) {
        std::cout << "Invalid index or no materia equipped at this slot." << std::endl;
        return;
    }

    _inventory[idx]->use(target);
}

std::string const & Character::getName() const {
	return _name;
}


