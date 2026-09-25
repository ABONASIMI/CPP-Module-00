/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnasimi <mnasimi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 15:39:53 by mnasimi           #+#    #+#             */
/*   Updated: 2026/09/25 15:39:54 by mnasimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
}

void Contact::setFirstName(std::string value)
{
	firstName = value;
}

void Contact::setLastName(std::string value)
{
	lastName = value;
}

void Contact::setNickName(std::string value)
{
	nickName = value;
}

void Contact::setPhoneNumber(std::string value)
{
	phoneNumber = value;
}

void Contact::setDarkestSecret(std::string value)
{
	darkestSecret = value;
}

std::string Contact::getFirstName() const
{
	return firstName;
}

std::string Contact::getLastName() const
{
	return lastName;
}

std::string Contact::getNickName() const
{
	return nickName;
}

std::string Contact::getPhoneNumber() const
{
	return phoneNumber;
}

std::string Contact::getDarkestSecret() const
{
	return darkestSecret;
}
