#include "../include/BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(){
	loadData("data.csv");
}

BitcoinExchange::~BitcoinExchange(){}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other){
	this->_data = other._data;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &other){
	if (this != &other)
		this->_data = other._data;
	return *this;
}

bool BitcoinExchange::loadData(const std::string &filename){
	std::ifstream file("data.csv");
	if (!file.is_open()){
		std::cerr << "Error: opening the file" << std::endl;
		return 0;
	}

	std::string line;
	std::getline(file, line);
	while ()
	{
		/* code */
	}
	
	return 1;
}
