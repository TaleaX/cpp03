/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdehne <tdehne@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 22:22:40 by tdehne            #+#    #+#             */
/*   Updated: 2023/01/15 22:47:54 by tdehne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

//canonical
ScavTrap::ScavTrap(void) {
	std::cout << "ScavTrap Default constructor has been called" << std::endl;
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

//public member fun

void ScavTrap::guardGate(void) {
	std::cout << "ScavTrap " << this->_name << " is now in gate keeper mode!" << std::endl;
}

void ScavTrap::attack(const std::string& target) {
	std::cout << "ScavTrap " << this->_name << " attacks " << target << " causing " << this->_attackDamage << " points of damage!" << std::endl;
	this->_energyPoints--;
}
