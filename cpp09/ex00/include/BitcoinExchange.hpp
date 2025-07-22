#ifndef BitcoinExchange_HPP
#define BitcoinExchange_HPP
#include <iostream>
#include <fstream>
#include <map>

class BitcoinExchange{
	private:
		std::map<std::string, float> _data;
	public:
		BitcoinExchange();
		~BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &other);
		BitcoinExchange &operator=(const BitcoinExchange &other);

		bool loadData(const std::string &data);
};


#endif
