#include "../include/Contact.hpp"

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
		default:
			return("Unknown");
	}
}


// Getter
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

// Setters
void Contact::setName(std::string n)
{
	this->_name = n;
}

void Contact::setPhone(int p)
{
	this->_phone = p;
}

void Contact::setBirthDate(std::string bdate)
{
	this->_birthDate = bdate;
}

void Contact::setAge(int a)
{
	this->_age = a;
}

void Contact::setHobby(Hobby h)
{
	this->_activity = h;
}

// others
void Contact::info()
{
	std::cout << "PhoneBook" << std::endl;
	std::cout << "Nome: " << _name << " | Telefone: " << _phone << " | Data de Nascimento: " << _birthDate << " | Idade: " << _age
	<< " | Hobby: " << hobbytoString(_activity) << std::endl;
}
