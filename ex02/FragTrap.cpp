/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdehne <tdehne@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 22:22:40 by tdehne            #+#    #+#             */
/*   Updated: 2023/01/15 23:04:24 by tdehne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

//canonical
FragTrap::FragTrap(void) {
	std::cout << "FragTrap Default constructor has been called" << std::endl;
}

FragTrap::~FragTrap(void) {
	std::cout << "FragTrap Destructor has been called" << std::endl;
}

FragTrap::FragTrap(std::string name) {
	std::cout << "FragTrap with name: " << name << " has been created" << std::endl;
	this->setName(name);
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
}

FragTrap::FragTrap (const FragTrap& rhs) {
	std::cout << "FragTrap Copy Constructor has been called" << std::endl;
	*this = rhs;
}

//public member fun

void FragTrap::highFiveGuys(void) {
	std::cout << "High five guy?" << std::endl;
}

