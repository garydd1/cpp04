#include "Brain.hpp"

Brain::Brain(){
	std::cout << "Brain Default Constructor Called" << std::endl;
}

Brain::~Brain(){
	std::cout << "Brain Destructor Called" << std::endl;
}

Brain::Brain(const Brain& toCopy){
	std::cout << "Brain Copy Constructor Called" << std::endl;
	for (int i = 0; i < 100; i++){
		this->ideas[i] = toCopy.ideas[i];
	}
}

Brain& Brain::operator=(const Brain& original){
	std::cout << "Brain Assignment Operator Called" << std::endl;
	if (this == &original)
		return (*this);
	for (int i = 0; i < 100; i++){
		this->ideas[i] = original.ideas[i];
	}
	return (*this);
}