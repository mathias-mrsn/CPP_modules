/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 17:40:27 by mamaurai          #+#    #+#             */
/*   Updated: 2022/05/19 12:59:40 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <algorithm>
#include <iostream>
#include <vector>

class IsNotInContainer : public std::exception
{
	public:
		virtual const char * what (void) const throw() {return ("impossible to find this value in the container");}
};

template<typename T>
bool
easyfind (T container, int toFind)
{
	if (std::find(container.begin(), container.end(), toFind) != container.end())
		return (true);
	else
		throw IsNotInContainer();
}