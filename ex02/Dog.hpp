#ifndef DOG_HPP
# define DOG_HPP
#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

class Dog: public Animal{

public:
	Dog( void );
	~Dog( void );
	Dog(const Dog& toCopy);
	Dog& operator=(const Dog& original);
	void makeSound( void ) const;

private:
	Brain *brain;
};
#endif