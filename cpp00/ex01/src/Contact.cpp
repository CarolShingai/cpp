#include "../include/Contact.hpp"

Contact::Contact() {}
Contact::Contact(std::string p, std::string nick, std::string n, std::string sname, DarkSecret s) :
_firstName(n), _surname(sname), _nickname(nick), _phone(p), _darkestSecret(s){}


DarkSecret stringHiddenSecret(const std::string& secret)
{
    if (secret == "HiddenRivalry") return HiddenRivalry;
    if (secret == "QuietConspiracy") return QuietConspiracy;
    if (secret == "DangerousAlly") return DangerousAlly;
    if (secret == "HiddenAgenda") return HiddenAgenda;
    if (secret == "SinisterDeal") return SinisterDeal;
    if (secret == "MemoryLeaks") return MemoryLeaks;
    return Unknown;
}

DarkSecret nbrtoHiddenSecret(int nbr)
{
	switch(nbr)
	{
		case 0:
			return (HiddenRivalry);
		case 1:
			return (QuietConspiracy);
		case 2:
			return (DangerousAlly);
		case 3:
			return (HiddenAgenda);
		case 4:
			return (SinisterDeal);
		case 5:
			return (MemoryLeaks);
		default:
			return (Unknown);
	}
}


std::string SecretoString(DarkSecret activity)
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

void Contact::setPhone(std::string p)
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
	std::cout << "Nome: " << _firstName << std::endl
			<< "Surname: " << _surname << std::endl
			<< "Apelido: " << _nickname << std::endl
			<< "Telefone: " << _phone << std::endl
			<< "DarkSecret: " << SecretoString(_darkestSecret)
			<< std::endl;
}
