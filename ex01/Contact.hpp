#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact
{
private:
	std::string	firstName;
	std::string	lastName;
	std::string	nickName;
	std::string	phoneNumber;
	std::string	darkestSecret;

public:
	Contact();

	void	setFirstName(std::string value);
	void	setLastName(std::string value);
	void	setNickName(std::string value);
	void	setPhoneNumber(std::string value);
	void	setDarkestSecret(std::string value);

	std::string	getFirstName() const;
	std::string	getLastName() const;
	std::string	getNickName() const;
	std::string	getPhoneNumber() const;
	std::string	getDarkestSecret() const;
};

#endif
