

#include "PhoneBook.hpp"
#include "Contact.hpp"


int main(void)
{
	PhoneBook 	PhoneBook;
	bool		run = true;
	std::string	command;

	PhoneBook.search_contact();
	std::cout << "\033[33m$>\033[0m";
	while (run && std::getline(std::cin, command))
	{
		if (std::cin.eof() == true)
		{
			std::cout << "You Pressed ^D. Exiting phonebook now." << std::endl;
			exit(0);
		}
		else if (command.compare("SEARCH") == 0)
			PhoneBook.search_contact();
		else if (command.compare("EXIT") == 0)
		{
			std::cout << "\033[34mHope i served you well. Good Bye.\033[0m" << std::endl;
			run = false;
			continue ;
		}
		command.clear();
		PhoneBook.search_contact();
		std::cout << "\033[33m$>\033[0m";
	}
	if (run)
	{
		std::cout << "You pressed ^D, exiting now." << command << std::endl
		<< "\033[34mHope i served you well. Good Bye.\033[0m" << std::endl;
	}
	return (0);
}