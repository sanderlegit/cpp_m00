/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   contact.class.cpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/12 11:45:45 by averheij      #+#    #+#                 */
/*   Updated: 2021/01/12 12:27:58 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "contact.class.hpp"

Contact::Contact(void) {
	return;
}

Contact::~Contact(void) {
	return;
}

void	Contact::writeContact(void) {
	std::cout << "Enter details into the fields as they appear." << std::endl;
	std::cout << "First Name: ";
	std::cin >> this->_firstName;
	std::cout << "Last Name: ";
	std::cin >> this->_lastName;
	std::cout << "Nickname: ";
	std::cin >> this->_nickname;
	std::cout << "Login: ";
	std::cin >> this->_login;
	std::cout << "Postal Address: ";
	std::cin >> this->_postalAddress;
	std::cout << "Email Address: ";
	std::cin >> this->_emailAddress;
	std::cout << "Phone Number: ";
	std::cin >> this->_phoneNumber;
	std::cout << "Birthday Date: ";
	std::cin >> this->_birthdayDate;
	std::cout << "Favorite Meal: ";
	std::cin >> this->_favoriteMeal;
	std::cout << "Underwear Color: ";
	std::cin >> this->_underwearColor;
	std::cout << "Darkest Secret: ";
	std::cin >> this->_darkestSecret;
	this->_isEmpty = 0;
	return;
}

void	Contact::clearContact(void) {
	this->_clearField(this->_firstName);
	this->_clearField(this->_lastName);
	this->_clearField(this->_nickname);
	this->_clearField(this->_login);
	this->_clearField(this->_postalAddress);
	this->_clearField(this->_emailAddress);
	this->_clearField(this->_phoneNumber);
	this->_clearField(this->_birthdayDate);
	this->_clearField(this->_favoriteMeal);
	this->_clearField(this->_underwearColor);
	this->_clearField(this->_darkestSecret);
	this->_isEmpty = 1;
}

void	Contact::getContact(void) {
	if (this->_isEmpty == 0) {
		std::cout << "First Name: " << this->_firstName << std::endl;
		std::cout << "Last Name: " << this->_lastName << std::endl;
		std::cout << "Nickname: " << this->_nickname << std::endl;
		std::cout << "Login: " << this->_login << std::endl;
		std::cout << "Postal Address: " << this->_postalAddress << std::endl;
		std::cout << "Email Address: " << this->_emailAddress << std::endl;
		std::cout << "Phone Number: " << this->_phoneNumber << std::endl;
		std::cout << "Birthday Date: " << this->_birthdayDate << std::endl;
		std::cout << "Favorite Meal: " << this->_favoriteMeal << std::endl;
		std::cout << "Underwear Color: " << this->_underwearColor << std::endl;
		std::cout << "Darkest Secret: " << this->_darkestSecret << std::endl;
	} else {
		std::cout << "This Contact memory is empty." << std::endl;
	}
}

void	Contact::getNames(void) {
	if (this->_isEmpty == 0) {
		std::cout << this->_firstName << "\t" << this->_lastName << "\t" << this->_nickname << std::endl;
	} else {
		std::cout << "This Contact memory is empty." << std::endl;
	}
}


void	Contact::_clearField(char *field) {
	for(int i = 0; i < 256; i++)
		field[i] = 0;
	return;
}
