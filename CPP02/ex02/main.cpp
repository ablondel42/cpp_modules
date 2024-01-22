/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 15:42:02 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/24 17:34:03 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int		main(void) 
{
	/*
	std::cout << "TESTS PERSO" << std::endl;
	/////////////////////////////////////////////////
	Fixed const x1(Fixed(5.0f) + Fixed(-2.5f));
	std::cout << "(5.0f + -2.5f) operateur '+': ";
	std::cout << "x1 = " << x1.toFloat() << std::endl;
	/////////////////////////////////////////////////
	Fixed const x2(Fixed(5.0f) - Fixed(2));
	std::cout << "(5.0f - 2)     operateur '-': ";
	std::cout << "x2 = " << x2.toFloat() << std::endl;
	/////////////////////////////////////////////////
	Fixed const x3(Fixed(5.0f) * Fixed(2));
	std::cout << "(5.0f * 2)     operateur '*': ";
	std::cout << "x3 = " << x3.toFloat() << std::endl;
	/////////////////////////////////////////////////
	Fixed const x4(Fixed(5.0f) / Fixed(2));
	std::cout << "(5.0f / 2)     operateur '/': ";
	std::cout << "x4 = " << x4.toFloat() << std::endl;
	/////////////////////////////////////////////////
	std::cout << "operateur " << x1.toFloat() << " > " << x2.toFloat()  << " resultat: " << (x1 > x2) << std::endl;
	std::cout << "operateur " << x3.toFloat() << " < " << x4.toFloat()  << " resultat: " << (x3 < x4) << std::endl;
	std::cout << "operateur " << x1.toFloat() << " >= " << x2.toFloat() << " resultat: " << (x1 >= x2) << std::endl;
	std::cout << "operateur " << x3.toFloat() << " <= " << x4.toFloat() << " resultat: " << (x3 <= x4) << std::endl;
	std::cout << "operateur " << x1.toFloat() << " == " << x2.toFloat() << " resultat: " << (x1 == x2) << std::endl;
	std::cout << "operateur " << x3.toFloat() << " != " << x4.toFloat() << " resultat: " << (x3 != x4) << std::endl;
	//////////////////////////////////////////////////
	*/
	std::cout << "TESTS DU PDF" << std::endl;
	Fixed a;
	Fixed const b(Fixed(5.5f) * Fixed(2));
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;
	return (0);
}
