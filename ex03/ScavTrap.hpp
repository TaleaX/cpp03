/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdehne <tdehne@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 23:08:39 by tdehne            #+#    #+#             */
/*   Updated: 2023/01/15 23:08:41 by tdehne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __SCAVTRAP_H__
# define  __SCAVTRAP_H__

#include "ClapTrap.hpp"
#include <string>

class ScavTrap : public ClapTrap {
	public:
		void		guardGate(void);
		void		attack(const std::string& target);
					ScavTrap (const ScavTrap& rhs);
					ScavTrap(std::string name);
					ScavTrap(void);
					~ScavTrap(void);
};

#endif