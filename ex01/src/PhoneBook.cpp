#include "../include/PhoneBook.hpp"

PhoneBook::PhoneBook() : iterator(0), size(8)
{
	this->_line = "";
	this->_operation = "";
}

// Set limit and remove the older contact
void PhoneBook::removeElement(int &size)
{
	for (int i = 0; i < size -1; i++)
		phoneList[i] = phoneList[i + 1];
	size--;
}

void PhoneBook::checkSize()
{
	if (iterator == 8)
	{
		std::cout << "The list has reached its limit." << std::endl;
		std::cout << "Removing Contact: " << phoneList[0].getFirstName() << std::endl;
		removeElement(iterator);
		iterator = 0;
	}
}

// Validate inputs
bool checkNames(std::string name)
{
	if (name.empty())
		return (false);
	return (true);
}

bool checkPhone(std::string phone)
{
	if (phone.empty())
		return (false);
	for (int i = 0; i < phone.size(); i++)
	{
		if (!std::isdigit(phone[i]))
			return (false);
	}
	return (true);
}

bool checkOnlySpace(std::string str)
{
	for (int i = 0; i < str.size(); i++)
	{
		if (!std::isspace(str[i]))
			return (false);
	}
	return (true);
}


// PhoneBook User tools
// void PhoneBook::addContact(Contact newPerson)
// {
// 	checkSize();
// 	phoneList[iterator].setFirstName(th) = newPerson.getFirstName();
// 	iterator += 1;
// }

void PhoneBook::search(Contact person)
{
	for (int i = 0; i < size; )
	{
		if (phoneList[i].getFirstName() == person.getFirstName())
			phoneList[i].info();
		i++;
	}
}


void PhoneBook::initPhoneBook()
{
	std::cout << "Welcome to Phonebook!";
	while (1)
	{
		std::cout << "Insert an operation, please. [ADD], [SEARCH], [EXIT]";
		std::getline(std::cin , this->_operation);
		if (_operation.empty() || !checkOnlySpace(_operation))
			continue;
	}
}
