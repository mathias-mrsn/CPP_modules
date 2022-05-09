/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 09:44:54 by mamaurai          #+#    #+#             */
/*   Updated: 2022/05/09 09:58:29 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>

class Data
{
	public:
		Data (void) : _data("data") {};
		Data (std::string const str) : _data(str) {};
		Data (const Data& ref) {*this = ref;};
		~Data (void) {};

		Data& operator=(const Data& ref) {this->_data = ref._data;return *this;}

		std::string getData(void) const {return (this->_data);}
	private:
		std::string 	_data;
};

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif