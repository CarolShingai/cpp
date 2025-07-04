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

e_type	identifyType(std::string &data);
bool	isPseudoLiteral(std::string &data);
bool	isAlpha(std::string &data);
e_type	isNumericType(std::string &data);
bool	isInt(std::string &data);
bool	isDouble(std::string &data);
bool	isUnprinteble(std::string &data);
bool	isFloat(std::string &data);


#endif
