/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnasimi <mnasimi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 15:40:01 by mnasimi           #+#    #+#             */
/*   Updated: 2026/09/25 15:40:02 by mnasimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <string>

static bool isEmpty(const std::string &value)
{
	return value.find_first_not_of(" \t\r\n") == std::string::npos;
}

static bool readField(const std::string &message, std::string &value)
{
	while (true)
	{
		std::cout << message << std::endl;
		if (!std::getline(std::cin, value))
			return false;
		if (!isEmpty(value))
			return true;
		std::cout << "Field cannot be empty." << std::endl;
	}
}

static bool addContact(PhoneBook &phoneBook)
{
	Contact contact;
	std::string value;

	if (!readField("First name:", value))
		return false;
	contact.setFirstName(value);
	if (!readField("Last name:", value))
		return false;
	contact.setLastName(value);
	if (!readField("Nickname:", value))
		return false;
	contact.setNickName(value);
	if (!readField("Phone number:", value))
		return false;
	contact.setPhoneNumber(value);
	if (!readField("Darkest secret:", value))
		return false;
	contact.setDarkestSecret(value);
	phoneBook.addContact(contact);
	return true;
}

int main()
{
	PhoneBook phoneBook;
	std::string command;

	while (true)
	{
		std::cout << "Enter command: ADD, SEARCH or EXIT" << std::endl;
		if (!std::getline(std::cin, command))
			break;
		if (command == "ADD")
		{
			if (!addContact(phoneBook))
				break;
		}
		else if (command == "SEARCH")
			phoneBook.searchContact();
		else if (command == "EXIT")
			break;
	}
	return 0;
}
