/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathias <mathias@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 14:50:51 by mathias           #+#    #+#             */
/*   Updated: 2022/02/20 15:05:21 by mathias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void
	str_upper(char *str)
{
	for(int j = 0; str[j]; j++)
		std::cout << (char)std::toupper(str[j]);
}

int
	main(int argc, char **argv)
{
	if (1 == argc)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for(int i = 1; i < argc; i++)
			str_upper(argv[i]);
		std::cout << std::endl;
	}
	return (0);
}