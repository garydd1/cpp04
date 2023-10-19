#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal{

public:
	Cat( void );
	~Cat( void );
	Cat(const Cat& toCopy);
	Cat& operator=(const Cat& original);
	void makeSound( void ) const;

private:
	Brain *brain;
};

#endif