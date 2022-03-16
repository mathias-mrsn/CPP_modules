/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 16:19:25 by mamaurai          #+#    #+#             */
/*   Updated: 2022/03/16 16:32:27 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_H
#define KAREN_H

#include <iostream>

class Karen {
	private:
		void	_debug (void);
		void	_info (void);
		void	_warning (void);
		void	_error (void);
	public:
		Karen (void);
		~Karen (void);
		
		void	complain (std::string);
};

typedef struct	s_level {
	void	(Karen::*f) (void);
}t_level;

#endif