/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 19:52:39 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/25 14:04:53 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

class DiamondTrap: virtual public FragTrap, public ScavTrap
{
	private:
		std::string _clap_name;
		using ClapTrap::_name;
	protected:
	
	public:
		using ScavTrap::attack;
		DiamondTrap();
		DiamondTrap( std::string name );
		DiamondTrap( const DiamondTrap &obj );
		DiamondTrap( const ClapTrap &obj );
		DiamondTrap	&operator=( const DiamondTrap &obj );
		~DiamondTrap();
		void	whoAmI( void );
};

#endif
