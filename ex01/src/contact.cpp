#include "../include/contact.hpp"

std::string hobbytoString(Hobby activity)
{
	switch(activity)
	{
		case movies:
			return ("Movies");
		case sports:
			return ("Sports");
		case cooking:
			return("Cooking");
		case dancing:
			return("Dancing");
		case drawing:
			return("Drawing");
	}
}

class Contact{
	private:
		int phone;
		int age;
		std::string name;
		std::string birthDate;
		Hobby activity;

	public:
		void getPhone()
		{
			std::cout << "Telefone: " << phone << std::endl;
		}
		void getName()
		{
			std::cout << "Nome: " << name << std::endl;
		}
		void getPhone()
		{
			std::cout << "Data de Nascimento: " << birthDate << std::endl;
		}
		void getHobby()
		{
			std::cout << "Hobby: " << hobbytoString(activity) << std::endl;
		}
		void info()
		{
			std::cout << "Nome: " << name << " | Telefone: " << phone << "Data de Nascimento: " << birthDate
			<< "Hobby: " << hobbytoString(activity) << std::endl;
		}
};
