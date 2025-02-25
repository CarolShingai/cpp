#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>
# include <cctype>
# include <string>
# include <vector>

enum DarkSecret
{
	HiddenRivalry,
	QuietConspiracy,
	DangerousAlly,
	HiddenAgenda,
	SinisterDeal,
	MemoryLeaks,
};

class Contact{
	private:
		std::string _firstName;
		std::string _surname;
		std::string _nickname;
		std::string _phone;
		DarkSecret _darkestSecret;

	public:
	// constructor
		Contact();
		Contact(std::string n, std::string sname, std::string p, std::string nick, DarkSecret s);
	// getter
		std::string getFirstName();
		std::string getSurname();
		std::string getPhone();
		std::string getNickname();
		DarkSecret getDarkSecret();
	// setter
		void setFirstName(std::string n);
		void setSurname(std::string sname);
		void setPhone(int p);
		void setNickname(std::string nick);
		void setDarkSecret(DarkSecret s);
	// others
		void info();
};

std::string hobbytoString(DarkSecret activity);

#endif
