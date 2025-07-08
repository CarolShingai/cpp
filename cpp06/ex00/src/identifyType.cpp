#include <cstdlib>
#include "../include/ScalarConverter.Hpp"

e_type identifyType(std::string const &data){
	if (isPseudoLiteral(data))
		return PSEUDOLITERAL;
	else if (isChar(data))
		return CHAR;
	e_type num = isNumericType(data);
	return num;
}

bool	isPseudoLiteral(std::string const &data){
	return data == "-inff" || data == "+inff" || data == "nanf" ||
	data == "-inf" || data == "+inf" || data == "nan";
}

bool	isChar(std::string const &data){
	if (data.length() == 1 && std::isprint(data[0]) && !std::isdigit(data[0]))
		return true;
	else
		return false;
}

// verificar se consegue transformar par INT, FLOAT, DOBLE
e_type isNumericType(std::string const &data){
	if (isInt(data))
		return INT;
	else if (isFloat(data))
		return FLOAT;
	else if (isDouble(data))
		return DOUBLE;
	else
		return OTHER;
}

bool isInt(std::string const &data){
	// Verifica se toda a string foi convertida e não está vazia
	char *endptr;
	strtol(data.c_str(), &endptr, 10);
	return *endptr == '\0' && data.size() > 0;
}

bool isFloat(std::string const &data){
	if (data.size() < 2 || data[data.size()-1] != 'f')
		return false;
	std::string floatPart = data.substr(0, data.size()-1);

	char *endptr;
	strtod(floatPart.c_str(), &endptr);
	return *endptr == '\0' && floatPart.size() > 0;
}

bool isDouble(std::string const &data){
	char *endptr;
    strtod(data.c_str(), &endptr);
    return *endptr == '\0' && data.size() > 0;
}

bool isUnprinteble(std::string const &data){
	for (size_t i = 0; i < data.size(); i++){
		if (!isprint(data[i]))
			return true;
	}
	return false;
}
