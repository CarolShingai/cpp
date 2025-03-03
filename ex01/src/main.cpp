#include "../include/Contact.hpp"
#include "../include/PhoneBook.hpp"

int main()
{
	PhoneBook MyPhoneBook;
	Contact contact1("caroline", "jgasjj", "carol", "123456", HiddenRivalry);
	MyPhoneBook.initPhoneBook();
	// MyPhoneBook.addContact(contact1);
	// MyPhoneBook.search(contact1);
}
