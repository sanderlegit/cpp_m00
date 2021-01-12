/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   phonebook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/12 11:33:32 by averheij      #+#    #+#                 */
/*   Updated: 2021/01/12 14:04:07 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "phonebook.class.hpp"
#include "contact.class.hpp"

void	testContact(void) {
	Contact contact;
	contact.writeContact();
	contact.getContact();
	contact.getIndex();
	contact.clearContact();
	contact.getContact();
	return;
}

int		main(void) {
	Phonebook	phonebook;
	return (0);
}
