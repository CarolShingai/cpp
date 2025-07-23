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


// talvez incluir validacao aqui
bool BitcoinExchange::loadData(const std::string &filename){
	std::ifstream file(filename);
	if (!file.is_open()){
		std::cerr << "Error: opening the file" << std::endl;
		return false;
	}
	std::string line;
	std::getline(file, line);
	while (std::getline(file, line))
	{
		size_t pos = line.find(',');
		if (pos == std::string::npos)
			throw std::runtime_error("Invalid data format in file");
		std::string date = line.substr(0, pos);
		std::string rateStr = line.substr(pos + 1);
		float rate = std::atof(rateStr.c_str());
		this->_data[date] = rate;
	}
	return true;
}
