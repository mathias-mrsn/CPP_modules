/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 15:54:22 by mamaurai          #+#    #+#             */
/*   Updated: 2022/03/31 15:55:30 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
#define HARL_H

#include <iostream>

class Harl {
	private:
		void	_debug (void);
		void	_info (void);
		void	_warning (void);
		void	_error (void);
	public:
		Harl (void);
		~Harl (void);
		
		void	complain (std::string);
};

typedef struct	s_level {
	void	(Harl::*f) (void);
}t_level;

#endif