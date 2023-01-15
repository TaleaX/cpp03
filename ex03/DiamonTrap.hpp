/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamonTrap.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdehne <tdehne@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 23:08:52 by tdehne            #+#    #+#             */
/*   Updated: 2023/01/15 23:11:40 by tdehne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __SCAVTRAP_H__
# define  __SCAVTRAP_H__

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <string>

class DiamondTrap : public ScavTrap, public FragTrap {
	public:
		// void		attack(const std::string& target);
					DiamondTrap (const DiamondTrap& rhs);
					DiamondTrap(std::string name);
					DiamondTrap(void);
					~DiamondTrap(void);
};

#endif