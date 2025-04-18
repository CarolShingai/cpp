# include <iostream>

int main()
{
	std::string str = "HI THIS IS BRAIN";

	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "String address: " << &str << " value: " << str  << std::endl;
	std::cout << "Pointer address: " << stringPTR << " value: " << *stringPTR << std::endl;
	std::cout << "Referencia address: " << &stringREF << " value: " << stringREF << std::endl;
}
