/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 13:55:49 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/25 13:50:53 by ablondel         ###   ########.fr       */
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
	std::cout << "FragTrap param constructor >> name: " << this->_name << std::endl;
}

FragTrap::FragTrap( const FragTrap &obj )
{
	*this = obj;
	std::cout << "FragTrap copy constructor >> name: " << this->_name << std::endl;
}

FragTrap	&FragTrap::operator=( const FragTrap &obj )
{
	this->_name = obj._name;
	this->_hitPoints = obj._hitPoints;
	this->_energyPoints = obj._energyPoints;
	this->_attackDamage = obj._attackDamage;
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor >> name: " << this->_name << std::endl;
}

void	FragTrap::highFiveGuys()
{
	std::cout << "FragTrap " << this->_name << " High five guys!" << std::endl;
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
		std::cout << "FragTrap " << this->_name << " has no energy points." << std::endl;
	}
}
