/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 16:33:09 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/24 22:32:01 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <string>
#include <iostream>

class ClapTrap
{
	private:
		std::string _name;
		int			_hitPoints;
		int			_energyPoints;
		int			_attackDamage;
	
	public:
		ClapTrap();
		ClapTrap( std::string name );
		ClapTrap( const ClapTrap &obj );
		ClapTrap &operator=( const ClapTrap &obj );
		~ClapTrap();
		void attack( std::string const & target );
		void takeDamage( unsigned int amount );
		void beRepaired( unsigned int amount );
		std::string getName( void ) const;
		int	getHitPoints( void ) const;
		int	getEnergyPoints( void ) const;
		int	getAttackDamage( void ) const;
};

#endif