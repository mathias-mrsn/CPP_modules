/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 15:56:01 by mamaurai          #+#    #+#             */
/*   Updated: 2022/05/16 16:14:52 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <iosfwd>
#include <cstring>

int
main
(int ac, char **av)
{
	if (ac != 4 || std::strlen(av[1]) == 0 || std::strlen(av[2]) == 0 || std::strlen(av[3]) == 0)
	{
		std::cout << "./sed \"filename\" \"string_to_find\" \"string_to_replace\"" << std::endl;
		return (EXIT_FAILURE);
	}

	std::string		filename = av[1];
	std::string		str_to_find = av[2];
	std::string		repl_file = filename.append(".replace");
	std::string		str_to_replace = av[3];

	std::ifstream	ifs;
	ifs.open(av[1]);
	if (ifs.fail())
	{
		std::cout << "error: cannot open " << av[1] << std::endl;
		return (EXIT_FAILURE);
	}

	std::ofstream	ofs;
	ofs.open(repl_file);
	if (ofs.fail())
	{
		std::cout << "error: cannot create " << repl_file << std::endl;
		ifs.close();
		return (EXIT_FAILURE);
	}
	
	std::string		buffer;
	
	while (true)
	{
		std::getline(ifs, buffer);
		while (true)
		{
			size_t	find_res = buffer.find(av[2]);
			
			if (find_res == std::string::npos)
			{
				ofs << buffer;
				break;
			}
			else
			{
				ofs << buffer.substr(0, find_res);
				ofs << str_to_replace;
				buffer = buffer.substr(find_res + str_to_find.size());
			}
		}
		if (ifs.eof())
			break;
		ofs << std::endl;
	}

	ofs.close();
	ifs.close();
	
	return (0);
	
}

