/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 11:36:57 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/24 17:38:47 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP
#include "Fixed.hpp"
class Fixed;

class Point: public Fixed
{
	private:
		const Fixed _x;
		const Fixed _y;
	public:
		Point();
		Point( const Fixed x, const Fixed y );
		Point( const Point& p );
		~Point();
		using 	Fixed::operator=;
		Fixed	getX( void ) const;
		Fixed	getY( void ) const;
		bool	bsp( Point const a, Point const b, Point const c, Point const p);
};

#endif
