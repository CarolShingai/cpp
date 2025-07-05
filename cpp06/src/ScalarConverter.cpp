#include "../include/ScalarConverter.Hpp"

ScalarConverter::ScalarConverter(){}

ScalarConverter::~ScalarConverter(){}

ScalarConverter::ScalarConverter(const ScalarConverter &copy){
	(void)copy;
}

ScalarConverter	&ScalarConverter::operator=(const ScalarConverter &other){
	(void)other;
	return *this;
}

// identificar o tipo


void	ScalarConverter::convert(std::string const &data){
	e_type type = identifyType(data);

	char	*endptr;
	char	c = 0;
	int		i = 0;
	float	f = 0.0f;
	double	d = 0.0;
	bool	charImpossible = false;
	bool	intImpossible = false;
	bool	charNonDisplayble = false;

	switch (type)
	{
		case CHAR:
			if (data.size() == 1){
				c = data[0];
				i = static_cast<int>(c);
				f = static_cast<float>(i);
				d = static_cast<float>(i);
			}
			else
				charImpossible = true;
			break;
		case INT:
			i = strtol(data.c_str(), &endptr, 10);
			if (i < 0 || i > 127)
				charImpossible = true;
			else{
				c = static_cast<char>(i);
				if (not std::isprint(c))
					charNonDisplayble = true;
			}
			f = static_cast<float>(i);
			d = static_cast<double>(i);
			break;
		case FLOAT:
			f = static_cast<float>(strtod(data.c_str(), &endptr));
			d = static_cast<double>(f);
			if (isPseudoLiteral(data)){
				charImpossible = true;
				intImpossible = true;
			}
			else{
				i = static_cast<int>(f);
				c = static_cast<char>(i);
				if (!std::isprint(c))
					charNonDisplayble = true;
			}
			break;
		case DOUBLE:
			d = strtod(data.c_str(), &endptr);
			f = static_cast<float>(i);
			if (isPseudoLiteral(data)){
				charImpossible = true;
				intImpossible = true;
			}
			else{
				i = static_cast<int>(f);
				c = static_cast<char>(i);
				if (std::isprint(c))
					charNonDisplayble = true;
			}
			break;
		case PSEUDOLITERAL:
			charImpossible = true;
			intImpossible = true;
			f = static_cast<float>(strtod(data.c_str(), &endptr));
			d = strtod(data.c_str(), &endptr);
			break;
		case OTHER:
			break;
	}

	// printando valores Convertidos
	std::cout << "char: ";
	if (charImpossible)
		std::cout << "impossible" << std::endl;
	else if (charNonDisplayble)
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << "'" << c << "'" << std::endl;
	std::cout << "int: ";
	if (intImpossible)
		std::cout << "impossible" << std::endl;
	else
		std::cout << i << std::endl;
	std::cout << "flout: ";
	if (f - static_cast<int>(f) == 0.0f)
		std::cout << f << ".0f" << std::endl;
	else
		std::cout << f << "f" << std::endl;
	std::cout << "double: ";
	if (d - static_cast<int>(d) == 0.0)
		std::cout << d << ".0" << std::endl;
	else
		std::cout << d << std::endl;
}
