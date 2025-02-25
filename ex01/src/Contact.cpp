#include "../include/Contact.hpp"

Contact::Contact() {}
Contact::Contact(std::string p, std::string nick, std::string n, std::string sname, DarkSecret h) :
_firstName(n), _surname(sname), _nickname(nick), _phone(p), _darkestSecret(h){}

std::string hobbytoString(DarkSecret activity)
{
	switch(activity)
	{
		case HiddenRivalry:
			return ("Hidden Rivalry");
		case QuietConspiracy:
			return ("Quiet Conspiracy");
		case DangerousAlly:
			return("Dangerous Ally");
		case HiddenAgenda:
			return("Hidden Agenda");
		case SinisterDeal:
			return("Sinister Deal");
		case MemoryLeaks:
			return("Memory Leaks");
		default:
			return("Unknown");
	}
}

// Getter
std::string Contact::getPhone()
{
	return (this->_phone);
}

std::string Contact::getFirstName()
{
	return (this->_firstName);
}

std::string Contact::getSurname()
{
	return (this->_surname);
}

std::string Contact::getNickname()
{
	return (this->_nickname);
}

DarkSecret Contact::getDarkSecret()
{
	return (this->_darkestSecret);
}

// Setters
void Contact::setFirstName(std::string n)
{
	this->_firstName = n;
}

void Contact::setPhone(int p)
{
	this->_phone = p;
}

void Contact::setSurname(std::string sname)
{
	this->_surname = sname;
}

void Contact::setNickname(std::string nick)
{
	this->_nickname = nick;
}

void Contact::setDarkSecret(DarkSecret h)
{
	this->_darkestSecret = h;
}

// others
void Contact::info()
{
	std::cout << "PhoneBook" << std::endl;
	std::cout << "Nome: " << _firstName << " | Surname: " << _surname << "  | Apelido: " << _nickname << " | Telefone: " << _phone
	<< " | DarkSecret: " << hobbytoString(_darkestSecret) << std::endl;
}
