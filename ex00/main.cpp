/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdehne <tdehne@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 21:55:33 by tdehne            #+#    #+#             */
/*   Updated: 2023/01/15 22:04:38 by tdehne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(){
	ClapTrap bimo("Bimo");
	bimo.attack("Bumi");
	bimo.beRepaired(4);
	bimo.takeDamage(6);
}