/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 16:33:56 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/25 14:47:55 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap default constructor" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap param constructor >> name: " << this->_name << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap &obj )
{
	std::cout << "ClapTrap copy constructor >> name: " << this->_name << std::endl;
	this->_name = obj.getName();
	this->_hitPoints = obj.getHitPoints();
	this->_energyPoints = obj.getEnergyPoints();
	this->_attackDamage = obj.getAttackDamage();
}

ClapTrap	&ClapTrap::operator=( const ClapTrap &obj )
{
	this->_name = obj.getName();
	this->_hitPoints = obj.getHitPoints();
	this->_energyPoints = obj.getEnergyPoints();
	this->_attackDamage = obj.getAttackDamage();
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor >> name: " << this->_name << std::endl;
}

std::string ClapTrap::getName() const
{
	return this->_name;
}

int	ClapTrap::getHitPoints( void ) const
{
	return this->_hitPoints;
}

int	ClapTrap::getEnergyPoints( void ) const
{
	return this->_energyPoints;
}

int	ClapTrap::getAttackDamage( void ) const
{
	return this->_attackDamage;
}

void	ClapTrap::attack( std::string const & target )
{
	if (this->_energyPoints > 0)
	{
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
		this->_energyPoints--;
	}
	else
	{
		std::cout << "ClapTrap " << this->_name << " is out of energy points." << std::endl;
	}
}

void	ClapTrap::takeDamage( unsigned int amount )
{
	if (this->_hitPoints - amount > 0)
	{
		std::cout << "ClapTrap " << this->_name << " has taken " << amount << " points of damage!" << std::endl;
		this->_hitPoints -= amount;
	}
	else
	{
		std::cout << "ClapTrap " << this->_name << " has no more hitpoints " << std::endl;
		this->_hitPoints = 0;
	}
}

void	ClapTrap::beRepaired( unsigned int amount )
{
	if (this->_energyPoints > 0)
	{
		std::cout << "ClapTrap " << this->_name << " has repaired " << amount << " hitpoints." << std::endl;
		this->_hitPoints += amount;
		this->_energyPoints--;
	}
	else
	{
		std::cout << "ClapTrap " << this->_name << " has no energy points." << std::endl;
	}
}
/*
void	ClapTrap::debug()
{
	std::cout << "\nDEBUG" << std::endl;
	std::cout << "Trap          " << this->_name << std::endl;
	std::cout << "hit points    " << this->_hitPoints << std::endl;
	std::cout << "energy points " << this->_energyPoints << std::endl;
	std::cout << "attack damage " << this->_attackDamage << std::endl;
	std::cout << "!DEBUG\n" << std::endl;
}
*/