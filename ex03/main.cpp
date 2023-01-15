/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdehne <tdehne@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 21:55:33 by tdehne            #+#    #+#             */
/*   Updated: 2023/01/15 23:02:21 by tdehne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

int main(){
	FragTrap bodo("Bodo");
	bodo.attack("Bumi");
	bodo.beRepaired(1);
	bodo.highFiveGuys();
	bodo.takeDamage(7);
}