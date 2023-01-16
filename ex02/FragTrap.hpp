/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdehne <tdehne@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 22:58:11 by tdehne            #+#    #+#             */
/*   Updated: 2023/01/15 23:00:36 by tdehne           ###   ########.fr       */
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
					FragTrap (const FragTrap& rhs);
					FragTrap(std::string name);
					FragTrap(void);
					~FragTrap(void);
};

#endif