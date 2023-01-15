/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdehne <tdehne@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 21:39:26 by tdehne            #+#    #+#             */
/*   Updated: 2023/01/15 22:46:50 by tdehne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __CLAPTRAP_H__
# define __CLAPTRAP_H__
#include <string>
#include <fstream>

class ClapTrap {
	public:
		void		setName(std::string name);
		void		setHitPoints(unsigned int points);
		void		setEnergyPoints(unsigned int points);
		void		setAttackDamage(unsigned int points);
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
	private:
		std::string		_name;
		int				_hitPoints;
		int				_energyPoints;
		unsigned int	_attackDamage;

};

std::ostream&	operator << (std::ostream& out, const ClapTrap& rhs);

#endif