#include <iostream>
#include <cctype>
#include <string>

std::string megaphone(std::string input)
{
	std::string newWord;
	if (input.empty())
		return ("* LOUD AND UNBEARABLE FEEDBACK NOISE *");
	for(size_t i = 0; i < input.size(); i++)
		newWord += toupper(input[i]);
	return(newWord);
}

int main(int argc, char **argv){
	(void)argc;
	std::string input;
	int i = 1;
	while (argv[i])
		input += argv[i++];
	std::cout << megaphone(input) << std::endl;
}
