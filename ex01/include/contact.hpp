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
		std::string _name;
		std::string _birthDate;
		int _age;
		int _phone;
		Hobby _activity;

	public:
		Contact();
		Contact(int p, int a, std::string n, std::string bdate, Hobby h);
		int getPhone();
		std::string getName();
		int getAge();
		std::string getBirthDate();
		Hobby getHobby();
		void info();
};

std::string hobbytoString(Hobby activity);

#endif
