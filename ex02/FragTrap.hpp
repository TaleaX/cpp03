/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdehne <tdehne@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 22:58:11 by tdehne            #+#    #+#             */
/*   Updated: 2023/01/18 18:07:21 by tdehne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __FRAGTRAP_H__
# define  __FRAGTRAP_H__

#include "ClapTrap.hpp"
#include <string>

class FragTrap : public ClapTrap {
	public:
		void		highFiveGuys(void);
		FragTrap&	operator=(const FragTrap& rhs);
					FragTrap (const FragTrap& rhs);
					FragTrap(std::string name);
					FragTrap(void);
					~FragTrap(void);
};

#endif