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
	std::cout << "ClapTrap " << this->_name << " attacks " << target << " causing " << this->_attackDamage << " points of damage!" << std::endl;
	this->_energyPoints--;
}

void  ClapTrap::beRepaired(unsigned int amount) {
	std::cout << "ClapTrap " << this->_name << " repairs itself and gets " << amount << " hitpoints " << std::endl;
	this->_hitPoints += amount;
	std::cout << "ClapTrap " << this->_name << " health is: " << this->_hitPoints  << std::endl;
	this->_energyPoints--;
}

void  ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "ClapTrap " << this->_name << " takes " << amount << " damage " << std::endl;
	this->_hitPoints -= amount;
	std::cout << "ClapTrap " << this->_name << " health is: " << this->_hitPoints  << std::endl;
}

void ClapTrap::setName(std::string name){
	this->_name = name;
}

void ClapTrap::setHitPoints(unsigned int points){
	this->_hitPoints = points;
}

void ClapTrap::setEnergyPoints(unsigned int points){
	this->_energyPoints = points;
}

void ClapTrap::setAttackDamage(unsigned int aDamage){
	this->_attackDamage = aDamage;
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