#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iostream>
# include <cctype>
# include <string>
# include <list>
# include "contact.hpp"

class PhoneBook
{
		private:
			Contact phoneList[8];
			int iterator;
			int	size;

		public:
			PhoneBook();
			void addContact(Contact newPerson);
			void search(Contact person);
};

# endif
