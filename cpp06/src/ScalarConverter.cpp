#include "../include/ScalarConverter.Hpp"

ScalarConverter::ScalarConverter(){}

ScalarConverter::~ScalarConverter(){}

ScalarConverter::ScalarConverter(const ScalarConverter &copy){}

ScalarConverter	&ScalarConverter::operator=(const ScalarConverter &other){}

void	ScalarConverter::convert(std::string &data){
	// verificar se 'e um pseudo literal -> pronto
	// verificar se se sao caracteris nao numericos
	// verificar se na string tem . e f
	// verificar se 'e printable
	// indicar o tipo
}

bool	isPseudoLiteral(std::string &data){
	return data == "-inff" || data == "+inff" || data == "nanf" ||
		data == "-inf" || data == "+inf" || data == "nan";
}

bool	isAlpha(std::string &data){
	for (int i = 0; i < data.length(); i++){
		if (!std::isalpha(data[i]))
			return false;
	}
	return true;
}

e_type identifyType(std::string &data){
	return 
}

// Sobrecarga de funcao
e_type getType(int data){
	return INT;
}

e_type getType(double data){
	return DOUBLE;
}

e_type getType(float data){
	return FLOAT;
}
