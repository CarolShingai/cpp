#include "../include/phonebook.hpp"

class PhoneBook
{
	private:
		std::list<Contact> phoneList;
	public:
		void addContact(Contact newPerson)
		{
			phoneList.push_back(newPerson);
		}
		void removeContact(Contact )
};
