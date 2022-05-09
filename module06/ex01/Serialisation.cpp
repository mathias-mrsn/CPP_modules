/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialisation.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 09:49:03 by mamaurai          #+#    #+#             */
/*   Updated: 2022/05/09 09:52:24 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t
serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data*
deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}