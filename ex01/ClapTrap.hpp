/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdehne <tdehne@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 21:39:26 by tdehne            #+#    #+#             */
/*   Updated: 2023/01/15 22:43:33 by tdehne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __CLAPTRAP_H__
# define __CLAPTRAP_H__
#include <string>
#include <fstream>

//regular bold high intensity
#define BH_RED "\e[1;91m"
#define BH_GRN "\e[1;92m"
#define BH_YEL "\e[1;93m"
#define BH_BLU "\e[1;94m"
#define BH_MAG "\e[1;95m"
#define BH_CYN "\e[1;96m"

//regular high intensity text
#define H_RED "\e[0;91m"
#define H_GRN "\e[0;92m"
#define H_YEL "\e[0;93m"
#define H_BLU "\e[0;94m"
#define H_MAG "\e[0;95m"
#define H_CYN "\e[0;96m"

// regular text
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define YEL "\e[0;33m"
#define BLU "\e[0;34m"
#define MAG "\e[0;35m"
#define CYN "\e[0;36m"

//Regular bold text
#define B_RED "\e[1;31m"
#define B_GRN "\e[1;32m"
#define B_YEL "\e[1;33m"
#define B_BLU "\e[1;34m"
#define B_MAG "\e[1;35m"
#define B_CYN "\e[1;36m"

#define RESET "\e[0m"

class ClapTrap {
	public:
		std::string	getName(void) const;
		int			getHitPoints(void) const;
		int			getEnergyPoints(void) const;
		int			getAttackDamage(void) const;
		void		attack(const std::string& target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		ClapTrap&	operator = (const ClapTrap& rhs);
					ClapTrap(const ClapTrap & src);
					ClapTrap(std::string name);
					ClapTrap(void);
					~ClapTrap(void);
	protected:
		std::string		_name;
		int				_hitPoints;
		int				_energyPoints;
		unsigned int	_attackDamage;

};

std::ostream&	operator << (std::ostream& out, const ClapTrap& rhs);

#endif