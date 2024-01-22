/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 15:40:17 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/13 13:39:44 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int					_fixedPoint;
		const static int 	_fractBits;
	public:
		Fixed();
		Fixed( int n );
		Fixed( float f );
		Fixed( Fixed &obj );
		Fixed( const Fixed& obj );
		~Fixed();
		Fixed 			&operator=( const Fixed &obj );
		int				getRawBits( void ) const;
		void			setRawBits( int const raw );
		float			toFloat( void ) const;
		int				toInt( void ) const;
};

std::ostream	&operator<<( std::ostream &o, Fixed const &obj );

#endif
