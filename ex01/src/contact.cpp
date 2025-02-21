#include "../include/contact.hpp"

Contact::Contact() {}
Contact::Contact(int p, int a, std::string n, std::string bdate, Hobby h) :
_name(n), _birthDate(bdate), _age(a), _phone(p), _activity(h){}

std::string hobbytoString(Hobby activity)
{
	switch(activity)
	{
		case movies:
			return ("Movies");
		case sports:
			return ("Sports");
		case cooking:
			return("Cooking");
		case dancing:
			return("Dancing");
		case drawing:
			return("Drawing");
	}
}

int Contact::getPhone()
{
	return (this->_phone);
}

std::string Contact::getName()
{
	return (this->_name);
}

std::string Contact::getBirthDate()
{
	return (this->_birthDate);
}

int Contact::getAge()
{
	return (this->_age);
}

Hobby Contact::getHobby()
{
	return (this->_activity);
}
void Contact::info()
{
	std::cout << "Nome: " << _name << " | Telefone: " << _phone << "Data de Nascimento: " << _birthDate << " | Idade" << _age
	<< "Hobby: " << hobbytoString(_activity) << std::endl;
}
