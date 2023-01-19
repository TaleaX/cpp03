/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdehne <tdehne@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 23:08:52 by tdehne            #+#    #+#             */
/*   Updated: 2023/01/19 14:33:39 by tdehne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __DIAMONDTRAP_H__
# define  __DIAMONDTRAP_H__

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <string>

class DiamondTrap : public FragTrap, public ScavTrap {
	public:
		void		whoAmI(void);
		void		attack(const std::string& target);
					DiamondTrap (const DiamondTrap& rhs);
					DiamondTrap(std::string name);
					DiamondTrap(void);
					~DiamondTrap(void);
	private:
		std::string	_name;
};

#endif