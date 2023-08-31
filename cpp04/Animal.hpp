#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal {

public:
	Animal();
	virtual ~Animal(void);
	Animal(const std::string name);
	Animal(const Animal& toCopy);
	Animal& operator=(const Animal& original);
	virtual void makeSound( void ) const;
	std::string getType( void ) const;

protected:
	std::string type;

};

#endif