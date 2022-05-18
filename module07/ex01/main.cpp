/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 15:03:47 by mamaurai          #+#    #+#             */
/*   Updated: 2022/05/18 09:43:24 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int
main (__attribute__((unused)) int ac, __attribute__((unused)) char **av)
{
	std::string tab[5];

	tab[0] = "salut";
	tab[1] = "comment";
	tab[2] = "tu";
	tab[3] = "va";
	tab[4] = "cool";

	::iter(tab, static_cast<size_t>(5), &putstr);

	int tab_int[7] = {0, 1, 2, 3, 4, 5, 6};

	::iter(tab_int, static_cast<size_t>(7), &putstr);

	return (0);
}
