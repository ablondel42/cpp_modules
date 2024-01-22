/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 16:32:45 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/25 14:47:06 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int		main(void)
{
	ClapTrap a("Yooo");
	ClapTrap b("Yaaa");
	std::cout << "a energy points = " << a.getEnergyPoints() << std::endl;
	std::cout << "b energy points = " << b.getEnergyPoints() << std::endl;
	a.attack(b.getName());
	b.attack(a.getName());
	b.takeDamage(a.getAttackDamage());
	b.beRepaired(10);
	std::cout << "a energy points = " << a.getEnergyPoints() << std::endl;
	std::cout << "b energy points = " << b.getEnergyPoints() << std::endl;
	return (0);
}