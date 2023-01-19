/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdehne <tdehne@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 13:11:42 by tdehne            #+#    #+#             */
/*   Updated: 2023/01/19 14:39:19 by tdehne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(const DiamondTrap& rhs) : ClapTrap(rhs), FragTrap(rhs), ScavTrap(rhs) {
    std::cout << "DiamonTrap  copy constructor called" << std::endl;
    *this = rhs;
}

DiamondTrap::DiamondTrap(std::string name) {
    std::cout << "DiamonTrap constructor called" << std::endl;
    ClapTrap::_name = name;
    this->_name = ClapTrap::_name + "_clap_name";
    this->_attackDamage = FragTrap::_attackDamage;
    this->_hitPoints = FragTrap::_hitPoints;
    this->_energyPoints = ScavTrap::_energyPoints;
}

DiamondTrap::DiamondTrap(void) {
    std::cout << "DiamonTrap  default constructor called" << std::endl;
    this->_attackDamage = FragTrap::_attackDamage;
    this->_hitPoints = FragTrap::_hitPoints;
    this->_energyPoints = ScavTrap::_energyPoints;
}

DiamondTrap::~DiamondTrap(void) {
    std::cout << "DiamonTrap destructor called" << std::endl;
}

void DiamondTrap::attack(const std::string& target) {
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(void) {
    std::cout << BH_CYN << "\n-----------------------------------------" << std::endl;
    std::cout << "Claptrap name: " << ClapTrap::_name << std::endl;
    std::cout << "Diamondtrap name: " << this->_name << std::endl;
	std::cout << "-----------------------------------------" << RESET << std::endl;
}