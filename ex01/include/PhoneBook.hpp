#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iostream>
# include <cctype>
# include <string>
# include <iomanip>
# include <cstdlib>
# include "Contact.hpp"

class PhoneBook
{
		private:
			Contact phoneList[8];
			std::string _line;
			std::string _operation;
			DarkSecret _secret;
			int	iterator;
			int	size;
			void removeElement(int &size);
			void checkSize();
			void getInput();
			void displayContact();
			void printContact(Contact contact, int index);
			void printFormat(std::string str);
			bool checkNames(std::string name);
			bool checkPhone(std::string phone);
			bool checkOnlySpace(std::string str);

		public:
			void initPhoneBook();
			PhoneBook();
			void addContact();
			void search();
};

# endif
