#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>
# include <cctype>
# include <string>
# include <vector>

enum Hobby{
	movies,
	sports,
	cooking,
	dancing,
	drawing,
};

class Contact{
	private:
		int phone;
		int age;
		std::string name;
		std::string birthDate;
		Hobby activity;

	public:
		void getPhone();
		void getName();
		void getPhone();
		void getHobby();
		void info();
};

std::string hobbytoString(Hobby activity);

#endif
