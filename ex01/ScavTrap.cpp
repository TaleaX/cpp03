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
}

ScavTrap::~ScavTrap(void) {
	std::cout << "ScavTrap Destructor has been called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) {
	std::cout << "ScavTrap with name: " << name << " has been created" << std::endl;
	this->setName(name);
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
}

ScavTrap::ScavTrap (const ScavTrap& rhs) {
	std::cout << "ScavTrap Copy Constructor has been called" << std::endl;
	*this = rhs;
}

//public member fun

void ScavTrap::guardGate(void) {
	std::cout << "ScavTrap " << this->getName() << " is now in gate keeper mode!" << std::endl;
}

void ScavTrap::attack(const std::string& target) {
	std::cout << "ScavTrap " << this->getName() << " attacks " << target << " causing " << this->getAttackDamage() << " points of damage!" << std::endl;
	this->setEnergyPoints(this->getEnergyPoints() - 1);
}
