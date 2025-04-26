#include "../include/Brain.hpp"

Brain::Brain(){
	std::cout << "Brain constructor called" << std::endl;
	for(int i = 0; i < 100; i++)
		_idea[i] = "";
}

Brain::Brain(const Brain &copy){
	std::cout << "Brain copy constructor called" << std::endl;
	*this = copy;
}

Brain &Brain::operator=(const Brain &copy){
	if (this != &copy){
		for(int i = 0; i < 100; i++)
			this->_idea[i] = copy._idea[i];
	}
	std::cout << "Brain copy operator called" << std::endl;
	return (*this);
}

Brain::~Brain(){
	std::cout << "Brain destructor called" << std::endl;
}

void Brain::setBrain(std::string s, int index){
	if (index >= 100)
		std::cout << "Index out of range, please a index between 0 and 99";
	else{
		std::cout << "Insertig idea";
		this->_idea[index] = s;
	}
}

std::string Brain::getIdea(int index){
	return (this->_idea[index]);
}
