/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 15:04:51 by mamaurai          #+#    #+#             */
/*   Updated: 2022/05/18 09:41:32 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template<typename T>
void	iter (T t[], size_t size, void (*f)(T const &))
{
	for (size_t i = 0; i < size; i++)
		f(t[i]);
}

template<typename T>
void	putstr (T & str)
{
	std::cout << str << std::endl;
}

#endif