/* ************************************************************************** */
/*                                                                            */
/*                                                       ..eeeee..            */
/*   megaphone.cpp                                     e8'   8   '8e          */
/*                                                    d8     8     8b         */
/*   By: dries <sanderlegit@gmail.com>                8!   .dWb.   !8         */
/*                                                    Y8 .e* 8 *e. 8P         */
/*   Created: 2021/03/24 17:19:48 by dries             *8*   8   *8*          */
/*   Updated: 2021/03/24 17:19:49 by dries               **ee8ee**            */
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
