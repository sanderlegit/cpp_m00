/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   phonebook.class.hpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/12 11:33:25 by averheij      #+#    #+#                 */
/*   Updated: 2021/01/12 14:41:10 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP
# include <iostream>
# include "contact.class.hpp"

class Phonebook {
	public:
		Phonebook(void);
		~Phonebook(void);
	private:
		Contact		_contacts[8];
		void		_search(void);
		void		_add(void);
		void		_index(void);
		void		_printIndex(void);
};

#endif
