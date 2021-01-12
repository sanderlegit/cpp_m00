/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   contact.class.hpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/12 11:45:48 by averheij      #+#    #+#                 */
/*   Updated: 2021/01/12 14:25:42 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP
# include <iostream>

class Contact {
	public:
		Contact(void);
		~Contact(void);

		void	writeContact(void);
		void	clearContact(void);
		void	getContact(void);
		void	getIndex(void);
		int		isEmpty(void);
	private:
		int		_isEmpty = 1;
		char	_firstName[256] = { };
		char	_lastName[256] = { };
		char	_nickname[256] = { };
		char	_login[256] = { };
		char	_postalAddress[256] = { };
		char	_emailAddress[256] = { };
		char	_phoneNumber[256] = { };
		char	_birthdayDate[256] = { };
		char	_favoriteMeal[256] = { };
		char	_underwearColor[256] = { };
		char	_darkestSecret[256] = { };

		void	_clearField(char *field);
		void	_printIndexField(char *value);
};

#endif
