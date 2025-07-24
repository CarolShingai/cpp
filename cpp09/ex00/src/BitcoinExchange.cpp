#include "../include/BitcoinExchange.hpp"
#include <ctime>

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
	std::ifstream file(filename.c_str());
	if (!file.is_open()){
		std::cerr << "Error: opening the file" << std::endl;
		return false;
	}
	std::string line;
	std::getline(file, line);
	while (std::getline(file, line))
	{
		line.erase(std::remove(line.begin(), line.end(), ' '), line.end());
		size_t pos = line.find(',');
		if (pos == std::string::npos)
			throw std::runtime_error("Invalid data format in file");
		if (line.substr(0, pos).empty() || line.substr(pos + 1).empty())
			throw std::runtime_error("Empty date or rate in file");
		std::string date = line.substr(0, pos);
		std::string rateStr = line.substr(pos + 1);
		float rate = std::atof(rateStr.c_str());
		this->_data[date] = rate;
	}
	return true;
}

float BitcoinExchange::getRate(const std::string date){
	if (this->_data.find(date) != this->_data.end())
		return this->_data[date];
	else
		throw std::runtime_error("Date not found in data");
}

void readInputFile(const char *file){
	std::ifstream inputFile(file);
	if (!inputFile.is_open())
		throw std::runtime_error("Error: File is not opening.");
	std::string inputLine;
	std::getline(inputFile, inputLine);
	if (inputLine != "date | value")
		throw std::runtime_error("Error: File in wrong format.");
	while (std::getline(inputFile, inputLine))
		if (checkInputFile(inputLine))
			std::cout << inputLine << std::endl;
}

bool checkInputFile(std::string inputLine){
	size_t pipe = inputLine.find('|');
	if (pipe == inputLine.npos){
		std::cerr << "Error: bad input => " << inputLine << std::endl;
		return false;
	}
	if (inputLine.find('|', pipe + 1) != inputLine.npos){
		std::cerr << "Error: bad input => " << inputLine << std::endl;
		return false;
	}
	std::string date = inputLine.substr(0, pipe);
	std::string value = inputLine.substr(pipe + 1, 5);
	if (!check_date(date)){
		std::cerr << "Error: bad input => " << inputLine << std::endl;
		return false;
	}
	return true;
}

bool check_date(std::string &date){
	int year = std::atoi(date.substr(0,4).c_str());
	int month = std::atoi(date.substr(5,2).c_str());
	int day = std::atoi(date.substr(8,2).c_str());
	int currentYear = getCurrentYear();

	if (month < 1 || month > 13)
		return false;
	if ((day < 1 || day > 31) || (month == 2 && day > 29))
		return false;
	if (year > currentYear)
		return false;
	return true;
}

int getCurrentYear(){
	time_t now = time(0);
	int currentYear = 1900 + localtime(&now)->tm_year;
	return currentYear;
}
