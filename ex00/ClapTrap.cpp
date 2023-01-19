/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdehne <tdehne@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 21:39:19 by tdehne            #+#    #+#             */
/*   Updated: 2023/01/15 22:46:42 by tdehne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

//canonical
ClapTrap::ClapTrap(void) : _hitPoints (10), _energyPoints(10), _attackDamage(0) {
	std::cout << "ClapTrap Default constructor has been called" << std::endl;
};

ClapTrap::~ClapTrap(void) {
	std::cout << "ClapTrap Destructor has been called" << std::endl;
};

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints (10), _energyPoints(10), _attackDamage(0) {
	std::cout << "ClapTrap with name: " << name << " has been created" << std::endl;
};

ClapTrap::ClapTrap(const ClapTrap & src) {
    std::cout << "ClapTrap Copy Constructor called" << std::endl;
    *this = src;
}

ClapTrap&	ClapTrap::operator = (const ClapTrap& rhs) {
	this->_name = rhs.getName();
	this->_hitPoints = rhs.getHitPoints();
	this->_energyPoints = rhs.getEnergyPoints();
	this->_attackDamage = rhs.getAttackDamage();
	return (*this);
};

//public member functions

void ClapTrap::attack(const std::string& target) {
	std::cout << B_RED << "\n-----------------------------------------" << std::endl;
	std::cout << "ATTACK" << RESET << std::endl;
	std::cout << B_BLU << "ClapTrap " << this->_name <<" attacks "  << target << RESET << std::endl;
	std::cout << "Bumi receives " << this->_attackDamage << " points of damage!" << std::endl;
	this->_energyPoints--;
	std::cout << BH_GRN << "Health: " << RESET << this->_hitPoints << std::endl;
	std::cout << BH_MAG << "Energy: " << RESET << this->_energyPoints  << std::endl;
	std::cout << B_RED << "-----------------------------------------" << RESET << std::endl;

}

void  ClapTrap::beRepaired(unsigned int amount) {
	std::cout << B_GRN << "\n-----------------------------------------" << std::endl;
	std::cout << "REPAIR" << RESET  << std::endl;
	std::cout << B_BLU << "ClapTrap " << this->_name << " heals itself:" << RESET << " +" << amount << std::endl;
	this->_hitPoints += amount;
	this->_energyPoints--;
	std::cout << BH_GRN << "Health: " << RESET << this->_hitPoints << std::endl;
	std::cout << BH_MAG << "Energy: " << RESET << this->_energyPoints  << std::endl;
	std::cout << B_GRN << "-----------------------------------------" << RESET << std::endl;
}

void  ClapTrap::takeDamage(unsigned int amount) {
	std::cout << B_YEL << "\n-----------------------------------------" << std::endl;
	std::cout << "DAMAGE" << RESET << std::endl;
	std::cout << B_BLU << "ClapTrap " << this->_name << " got hit:" << RESET << " -" << amount << std::endl;
	this->_hitPoints -= amount;
	std::cout << BH_GRN << "Health: " << RESET << this->_hitPoints << std::endl;
	std::cout << BH_MAG << "Energy: " << RESET << this->_energyPoints  << std::endl;
	std::cout << B_YEL << "-----------------------------------------" << RESET << std::endl;
}

int	ClapTrap::getHitPoints(void) const {
	return (this->_hitPoints);
}

int	ClapTrap::getEnergyPoints(void) const {
	return (this->_energyPoints);
}

int	ClapTrap::getAttackDamage(void) const {
	return (this->_attackDamage);
}

std::string	ClapTrap::getName(void) const {
	return (this->_name);
}

// global
std::ostream&	operator << (std::ostream& out, const ClapTrap& rhs) {
	out << rhs.getHitPoints();
	return (out);
}