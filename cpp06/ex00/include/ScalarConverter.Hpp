#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <cctype>
# include <string>
# include <cstdlib>

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
		static void convert(std::string const &data);


};

e_type	identifyType(std::string const &data);
bool	isPseudoLiteral(std::string const &data);
bool	isChar(std::string const &data);
e_type	isNumericType(std::string const &data);
bool	isInt(std::string const &data);
bool	isDouble(std::string const &data);
bool	isUnprinteble(std::string const &data);
bool	isFloat(std::string const &data);


#endif
