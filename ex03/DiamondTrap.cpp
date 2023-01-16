
#include <iostream>
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(const DiamondTrap& rhs) : ClapTrap(rhs), FragTrap(rhs), ScavTrap(rhs) {
    std::cout << "DiamonTrap  copy constructor called" << std::endl;
    *this = rhs;
}

DiamondTrap::DiamondTrap(std::string name) {
    std::cout << "DiamonTrap constructor called" << std::endl;
    ClapTrap::_name = name + "_clap_name";
    this->_name = ClapTrap::_name;
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
    std::cout << "Claptrap name: " << ClapTrap::_name << std::endl;
    std::cout << "Diamondtrap name: " << this->_name << std::endl;
}