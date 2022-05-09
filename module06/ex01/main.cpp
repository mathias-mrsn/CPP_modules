/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 09:52:01 by mamaurai          #+#    #+#             */
/*   Updated: 2022/05/09 10:00:28 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int
main (int ac, char **av)
{
	Data data("4u83290432052408fnruei3892873902");

	std::cout << "data address : " << &data << ", value : " << data.getData()  << std::endl;

	uintptr_t PTR = serialize((Data*)&data);

	std::cout << "PTR address returned by serialize : " << PTR << std::endl;

	std::cout << "Data address returned by deserialize : " << deserialize(PTR)  << ", value : " << deserialize(PTR)->getData()<< std::endl;
}