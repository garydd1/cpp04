#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>

class Brain{
public:
	Brain();
	~Brain();
	Brain(const Brain& toCopy);
	Brain& operator=(const Brain& original);
	

private:
	std::string ideas[100];
};
#endif