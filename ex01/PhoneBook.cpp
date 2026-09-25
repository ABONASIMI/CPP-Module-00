/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnasimi <mnasimi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 15:40:07 by mnasimi           #+#    #+#             */
/*   Updated: 2026/09/25 15:40:08 by mnasimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iomanip>
#include <iostream>
#include <sstream>

PhoneBook::PhoneBook()
{
	count = 0;
	next = 0;
}

void PhoneBook::addContact(const Contact &contact)
{
	contacts[next] = contact;
	next = (next + 1) % 8;
	if (count < 8)
		count++;
}

static std::string formatField(std::string value)
{
	if (value.length() > 10)
		value = value.substr(0, 9) + ".";
	return value;
}

void PhoneBook::searchContact() const
{
	if (count == 0)
	{
		std::cout << "PhoneBook is empty." << std::endl;
		return;
	}
	std::cout
		<< std::setw(10) << "index" << "|"
		<< std::setw(10) << "first name" << "|"
		<< std::setw(10) << "last name" << "|"
		<< std::setw(10) << "nickname" << std::endl;
	for (int i = 0; i < count; i++)
	{
		std::cout
			<< std::setw(10) << i << "|"
			<< std::setw(10) << formatField(contacts[i].getFirstName()) << "|"
			<< std::setw(10) << formatField(contacts[i].getLastName()) << "|"
			<< std::setw(10) << formatField(contacts[i].getNickName())
			<< std::endl;
	}
	std::cout << "Enter index:" << std::endl;
	std::string input;
	if (!std::getline(std::cin, input))
		return;
	std::stringstream ss(input);
	int index;
	char extra;
	if (!(ss >> index) || (ss >> extra) || index < 0 || index >= count)
	{
		std::cout << "Invalid index." << std::endl;
		return;
	}
	std::cout << "First name: "
		<< contacts[index].getFirstName() << std::endl;
	std::cout << "Last name: "
		<< contacts[index].getLastName() << std::endl;
	std::cout << "Nickname: "
		<< contacts[index].getNickName() << std::endl;
	std::cout << "Phone number: "
		<< contacts[index].getPhoneNumber() << std::endl;
	std::cout << "Darkest secret: "
		<< contacts[index].getDarkestSecret() << std::endl;
}
