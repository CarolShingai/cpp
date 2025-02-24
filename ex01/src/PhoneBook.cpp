#include "../include/PhoneBook.hpp"

PhoneBook::PhoneBook() : iterator(0), size(8){}

void PhoneBook::addContact(Contact newPerson)
{
	if (iterator == 8)
	{
		iterator = 0;
	}
	phoneList[iterator] = newPerson;
	iterator += 1;
}

void PhoneBook::search(Contact person)
{
	for (int i = 0; i < size; )
	{
		if (phoneList[i].getName() == person.getName())
			phoneList[i].info();
		i++;
	}
}
