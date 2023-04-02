/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdehne <tdehne@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 22:22:40 by tdehne            #+#    #+#             */
/*   Updated: 2023/01/19 14:38:46 by tdehne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

//canonical
ScavTrap::ScavTrap(void) {
	std::cout << "ScavTrap Default constructor has been called" << std::endl;
	this->_name = "ScavTrap";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::~ScavTrap(void) {
	std::cout << "ScavTrap Destructor has been called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) {
	std::cout << "ScavTrap with name: " << name << " has been created" << std::endl;
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap (const ScavTrap& rhs) : ClapTrap(rhs) {
	std::cout << "ScavTrap Copy Constructor has been called" << std::endl;
	*this = rhs;
}

//operator overloading
ScavTrap& ScavTrap::operator=(const ScavTrap& rhs) {
	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;
	return (*this);
}

//public member fun

void ScavTrap::guardGate(void) {
	std::cout << BH_YEL << "\n-----------------------------------------" << std::endl;
	std::cout << "ScavTrap " << this->_name << " is now in gate keeper mode!" << std::endl;
	std::cout << "-----------------------------------------" << RESET << std::endl;
}

void ScavTrap::attack(const std::string& target) {
	std::cout << B_RED << "\n-----------------------------------------" << std::endl;
	std::cout << "ATTACK" << RESET << std::endl;
	std::cout << BH_YEL << "ScavTrap " << this->_name <<" attacks "  << target << RESET << std::endl;
	std::cout << "Bumi receives " << this->_attackDamage << " points of damage!" << std::endl;
	this->_energyPoints--;
	std::cout << BH_GRN << "Health: " << RESET << this->_hitPoints << std::endl;
	std::cout << BH_MAG  << "Energy: " << RESET << this->_energyPoints  << std::endl;
	std::cout << B_RED << "-----------------------------------------" << RESET << std::endl;
}
