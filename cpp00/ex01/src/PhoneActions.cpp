#include "../include/PhoneBook.hpp"

void PhoneBook::addContact()
{
	checkSize();
	while (1)
	{
		if (!insertFirstName())
			continue;
		if (!insertSurname())
			continue;
		if (!insertNickname())
			continue;
		if (!insertPhone())
			continue;
		if (!insertDarkSecret())
			continue;
		else
		{
			iterator++;
			if (size < 8)
				size++;
			break;
		}
	}
}

// PhoneBook User tools
void PhoneBook::initPhoneBook()
{
	std::cout << "Welcome to Phonebook!\n";
	while (1)
	{
		std::cout << "Insert an operation, please: [ADD], [SEARCH], [EXIT] ";
		std::getline(std::cin , this->_operation);
		if (_operation.empty() && !checkOnlySpace(_operation))
		{
			std::cout << "Invalid operation. Try again.\n";
			continue;
		}
		if (_operation == "ADD")
			addContact();
		else if (_operation == "SEARCH")
			search();
		else if (_operation == "EXIT")
			break;
		else
			std::cout << "Invalid operation. Try again.\n";
	}
}
//inserindo dados no phonebook
bool	PhoneBook::insertFirstName()
{
	std::cout << "Enter the first name: ";
	std::getline(std::cin, this->_line);
	if (!checkNames(this->_line))
	{
		std::cout << "Invalid name. Try again.\n";
		return (false);
	}
	this->phoneList[iterator].setFirstName(this->_line);
	return (true);
}

bool PhoneBook::insertSurname()
{
	std::cout << "Enter the surname: ";
	std::getline(std::cin, this->_line);
	if (!checkNames(this->_line))
	{
		std::cout << "Invalid surname. Try again.\n";
		return (false);
	}
	this->phoneList[iterator].setSurname(this->_line);
	return (true);
}

bool PhoneBook::insertNickname()
{
	std::cout << "Enter the nickname: ";
	std::getline(std::cin, this->_line);
	if (!checkNames(this->_line))
	{
		std::cout << "Invalid nickname. Try again.\n";
		return (false);
	}
	this->phoneList[iterator].setNickname(this->_line);
	return (true);
}

bool PhoneBook::insertPhone()
{
	std::cout << "Enter the phone number: ";
	std::getline(std::cin, this->_line);
	if (!checkPhone(this->_line))
	{
		std::cout << "Invalid phone number. Try again.\n";
		return (false);
	}
	this->phoneList[iterator].setPhone(this->_line);
	return (true);
}

bool PhoneBook::insertDarkSecret()
{
	std::cout << "Enter the darkest secret (Insert a number between 0 and 5): ";
	std::getline(std::cin, this->_line);
	if (checkOnlySpace(_line))
	{
		std::cout << "Invalid secret. Try again.\n";
		return (false);
	}
	for (int i = 0; i < (int)_line.size(); i++)
	{
		if (std::isalpha(_line[i]))
		{
			std::cout << "Invalid secret. Try again.\n";
			return (false);
		}
	}
	if (std::atoi(_line.c_str()) >= 0 && std::atoi(_line.c_str()) <= 5)
	{
		_secret = nbrtoHiddenSecret(std::atoi(_line.c_str()));
		this->phoneList[iterator].setDarkSecret(_secret);
		return (true);
	}
	std::cout << "Invalid secret. Try again.\n";
	return (false);
}

// Printar lista


void	PhoneBook::printFormat(std::string str)
{
	std::string		temp;

	temp = str;
	std::cout << std::right
			<< std::setw(10)
			<< ((temp.size() > 10) ? temp.substr(0, 9) + "." : temp);
}

void	PhoneBook::printContact(Contact contact, int index)
{
	std::cout << "|" << std::right << std::setw(10) << index;
	std::cout << "|";
	this->printFormat(contact.getFirstName());
	std::cout << "|";
	this->printFormat(contact.getSurname());
	std::cout << "|";
	this->printFormat(contact.getNickname());
	std::cout << "|" << std::endl;
}
