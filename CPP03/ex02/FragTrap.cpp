/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 13:55:49 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/25 12:07:21 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap default constructor" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap param constructor >> name: " << this->getName() << std::endl;
}

FragTrap::FragTrap( const FragTrap &obj )
{
	std::cout << "FragTrap copy constructor >> name: " << this->_name << std::endl;
	*this = obj;
}

FragTrap	&FragTrap::operator=( const FragTrap &obj )
{
	std::cout << "FragTrap assignation operator >> name: " << this->_name << std::endl;
	this->_name = obj.getName();
	this->_hitPoints = obj.getHitPoints();
	this->_energyPoints = obj.getEnergyPoints();
	this->_attackDamage = obj.getAttackDamage();
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor >> name: " << this->_name << std::endl;
}

void	FragTrap::highFiveGuys()
{
	std::cout << "FragTrap : High five guys!" << std::endl;
}

void	FragTrap::attack( std::string const & target )
{
	if (this->_energyPoints > 0)
	{
		std::cout << "FragTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
		this->_energyPoints--;
	}
	else
	{
		std::cout << "FragTrap " << this->_name << " is out of energy points." << std::endl;
	}
}
