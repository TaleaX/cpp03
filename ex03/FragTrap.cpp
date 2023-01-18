/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdehne <tdehne@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 22:22:40 by tdehne            #+#    #+#             */
/*   Updated: 2023/01/18 18:07:39 by tdehne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

//canonical
FragTrap::FragTrap(void) {
	std::cout << "FragTrap Default constructor has been called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::~FragTrap(void) {
	std::cout << "FragTrap Destructor has been called" << std::endl;
}

FragTrap::FragTrap(std::string name) {
	std::cout << "FragTrap with name: " << name << " has been created" << std::endl;
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap (const FragTrap& rhs) : ClapTrap(rhs){
	std::cout << "FragTrap Copy Constructor has been called" << std::endl;
	*this = rhs;
}

//public member fun

void FragTrap::highFiveGuys(void) {
	std::cout << "High five guy?" << std::endl;
}

//operator overload
FragTrap& FragTrap::operator=(const FragTrap& rhs) {
	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;
	return (*this);
}