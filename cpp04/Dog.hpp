#ifndef DOG_HPP
# define DOG_HPP
#include "Animal.hpp"
#include <iostream>

class Dog: public Animal{
	public:
	Dog( void );
	~Dog( void );
	void makeSound( void ) const;

};
#endif