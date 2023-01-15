/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdehne <tdehne@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 21:55:33 by tdehne            #+#    #+#             */
/*   Updated: 2023/01/15 22:56:19 by tdehne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int main(){
	ScavTrap bodo("Bodo");
	bodo.attack("Bumi");
	bodo.beRepaired(1);
	bodo.guardGate();
	bodo.takeDamage(7);
}