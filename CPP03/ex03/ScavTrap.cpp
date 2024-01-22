/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 12:15:41 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/25 14:42:00 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap default constructor" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "ScavTrap param constructor >> name: " << this->_name << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap &obj )
{
	*this = obj;
	std::cout << "ScavTrap copy constructor >> name: " << this->_name << std::endl;
}

ScavTrap	&ScavTrap::operator=( const ScavTrap &obj )
{
	this->_name = obj.getName();
	this->_hitPoints = obj.getHitPoints();
	this->_energyPoints = obj.getEnergyPoints();
	this->_attackDamage = obj.getAttackDamage();
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor >> name: " << this->_name << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->_name << " has entered in Gate keeper mode." << std::endl;
}

void	ScavTrap::attack( std::string const & target )
{
	if (this->_energyPoints > 0)
	{
		std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
		this->_energyPoints--;
	}
	else
	{
		std::cout << "ScavTrap " << this->_name << " has no energy points." << std::endl;
	}
}
