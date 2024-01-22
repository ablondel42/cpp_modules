/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 16:32:45 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/25 11:57:52 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int		main(void)
{
	ClapTrap a("Clap");
	//a.debug();
	ScavTrap b("Scav");
	//b.debug();
	a.attack(b.getName());
	b.takeDamage(a.getAttackDamage());
	b.beRepaired(10);
	b.attack(a.getName());
	a.takeDamage(b.getAttackDamage());
	a.beRepaired(10);
	b.guardGate();
	return (0);
}