#include "../include/ScalarConverter.Hpp"

ScalarConverter::ScalarConverter(){}

ScalarConverter::~ScalarConverter(){}

ScalarConverter::ScalarConverter(const ScalarConverter &copy){}

ScalarConverter	&ScalarConverter::operator=(const ScalarConverter &other){}

// identificar o tipo


void	ScalarConverter::convert(std::string &data){
	e_type type = identifyType(data);

	char c;
	int i;
	float f;
	double d;
	bool charImpossible = false;
	bool intImpossible = false;

	switch (type)
	{
		case CHAR:
			if (data.size() == 1){
				c = data[0];
				i = static_cast<int>(c);
				f = static_cast<float>(i);
				d = static_cast<float>(i);
			}
			break;
		case INT:
			i = std::stoi(data);
			c = static_cast<char>(i);
			f = static_cast<float>(i);
			d = static_cast<double>(i);
			break;
		case FLOAT:
			f = std::stof(data);
			i = static_cast<int>(f);
			c = static_cast<char>(i);
			d = static_cast<double>(i);
			break;
		case DOUBLE:
			d = std::stod(data);
			i = static_cast<int>(d);
			c = static_cast<char>(i);
			f = static_cast<float>(i);
			break;
		case PSEUDOLITERAL:
			charImpossible = true;
			intImpossible = true;
			f = std::stof(data);
			d = std::stod(data);
			break;
	}
}
