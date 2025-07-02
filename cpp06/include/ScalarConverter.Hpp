#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP
# include <iostream>
# include <cctype>

enum e_type{
	INT,
	DOUBLE,
	FLOAT,
	PSEUDOLITERAL,
	CHAR,
	OTHER
};

class ScalarConverter{
	private:
		ScalarConverter(void);
		~ScalarConverter(void);
		ScalarConverter(const ScalarConverter &copy);
		ScalarConverter &operator=(const ScalarConverter &other);

	public:
		static void convert(std::string &literal);


};

#endif
