/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 15:56:01 by mamaurai          #+#    #+#             */
/*   Updated: 2022/03/16 16:17:48 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <cstring>
#include <iosfwd>

int
	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "./sed \"filename\" \"string_to_find\" \"string_to_replace\"" << std::endl;
		return (EXIT_FAILURE);
	}
	std::string		filename = av[1];
	std::string		repl_file = filename.append(".replace");
	std::ofstream	ofs(repl_file);
	std::ifstream	ifs(filename);

	std::string		buffer;
	while (true)
	{
		getline(buffer, ifs);
		while (true)
		{
			size_t	find_res buffer.find(av[2]);
			
			if (find_res == buffer.size())
			{
				ofs << buffer;
				break;
			}
			else
			{
				ofs << buffer.substr(0, find_res);
				buffer = buffer.substr(find_res + av[2].size());
			}
		}
	}
	return (0);
	
}

