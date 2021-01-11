/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   megaphone.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/11 15:26:45 by averheij      #+#    #+#                 */
/*   Updated: 2021/01/11 15:44:59 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

void	str2upper(char *str)
{
	while (*str)
	{
		*str = std::toupper(*str);
		str++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; i < argc; i++)
		{
			str2upper(argv[i]);
			std::cout << argv[i];
		}
		std::cout << std::endl;
	}
	return 0;
}
