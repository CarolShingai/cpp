#include "../include/PhoneBook.hpp"

PhoneBook::PhoneBook() : iterator(0), size(0)
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
bool PhoneBook::checkNames(std::string name)
{
	if (name.empty())
		return (false);
	return (true);
}

bool PhoneBook::checkPhone(std::string phone)
{
	if (phone.empty())
		return (false);
	for (int i = 0; i < static_cast<int>(phone.size()); i++)
	{
		if (!std::isdigit(phone[i]))
			return (false);
	}
	return (true);
}

bool PhoneBook::checkOnlySpace(std::string str)
{
	for (int i = 0; i < static_cast <int>(str.size()); i++)
	{
		if (!std::isspace(str[i]))
			return (false);
	}
	return (true);
}

void PhoneBook::search()
{
	std::cout << "Search for a contact: ";
	phoneList[0].info();
	displayContact();
	getIndex();
}

void PhoneBook::displayContact()
{
	std::cout << "Contact \n";
	if (size == 0)
		return;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	for (int i = 0; i < size; i++)
		printContact(phoneList[i], i);
}

void PhoneBook::getIndex()
{
	int	id;

	std::cout << "Enter the index of the contact you want to see: ";
	std::getline(std::cin, this->_line);
	if (std::isdigit(this->_line[0]) == false)
	{
		std::cout << "Invalid index. Try again.\n";
		return ;
	}
	id = std::atoi(this->_line.c_str());
	if (id > size || id < 0)
	{
		std::cout << "Invalid index. Try again.\n";
		return ;
	}
	phoneList[id].info();
}
