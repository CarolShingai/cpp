#include "../include/Contact.hpp"
#include "../include/PhoneBook.hpp"

int main()
{
	PhoneBook MyPhoneBook;
	Contact contact1(564564646, 45, "sfdcf", "646/645", sports);
	MyPhoneBook.addContact(contact1);
	MyPhoneBook.search(contact1);
}
