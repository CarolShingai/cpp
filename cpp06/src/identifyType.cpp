#include "../include/ScalarConverter.Hpp"

e_type identifyType(std::string &data){
	if (isPseudoLiteral(data))
		return PSEUDOLITERAL;
	else if (isAlpha(data))
		return CHAR;
	e_type num = isNumericType(data);
	return num;
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

// verificar se consegue transformar par INT, FLOAT, DOBLE
e_type isNumericType(std::string &data){
	if (isInt(data))
		return INT;
	else if (isFloat(data))
		return FLOAT;
	else if (isDouble(data))
		return DOUBLE;
	else
		return OTHER;
}

bool isInt(std::string &data){
	try{
		/* stoi transforma data para int e pega a posição do ultimo
		 caracter casteado. Ex: 255abc -> no número terá casting*/
		size_t pos;

		std::stoi(data, &pos);
		return pos == data.size();
		// (...)pega qualquer exceção
	} catch(...){
		return false;
	}
}

bool isFloat(std::string &data){
	// back retorna o ultimo caracter de data
	// stof faz a transfomação para float
	try{
		if (data.back() == 'f')
			std::stof(data);
		else
			return false;
		return true;
	} catch(...){
		return false;
	}
}

bool isDouble(std::string &data){
	try{
		size_t pos;
		std::stod(data, &pos);
		return pos == data.size();
	} catch(...){
		return false;
	}
}

bool isUnprinteble(std::string &data){
	for (int i = 0; i < data.size(); i++){
		if (!isprint(data[i]))
			return true;
	}
	return false;
}
