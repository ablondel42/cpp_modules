/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 19:51:05 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/25 13:53:56 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "DiamondTrap default constructor" << std::endl;
}

DiamondTrap::DiamondTrap( std::string name ) : ClapTrap( name + "_clap_name" ), FragTrap( name + "_clap_name" ), ScavTrap( name + "_clap_name" )
{
	std::cout << "DiamondTrap param constructor >> name: " << this->_clap_name << std::endl;
	this->_clap_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 30;
}

DiamondTrap	&DiamondTrap::operator=( const DiamondTrap &obj )
{
	this->_clap_name = obj.getName();
	this->_hitPoints = obj.getHitPoints();
	this->_energyPoints = obj.getEnergyPoints();
	this->_attackDamage = obj.getAttackDamage();
	return (*this);
}

DiamondTrap::DiamondTrap( const DiamondTrap &obj )
{
	std::cout << "DiamondTrap param constructor >> name: " << std::endl;
	*this = obj;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor >> name: " << this->_clap_name << std::endl;
}

void	DiamondTrap::whoAmI()
{
	std::cout << "Diamond name : " << this->_clap_name << std::endl;
	std::cout << "Clap name : " << this->_name << std::endl;
}
