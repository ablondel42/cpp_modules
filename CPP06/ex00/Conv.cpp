/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conv.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 13:42:09 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/28 19:58:41 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conv.hpp"

Conv::Conv()
{
	//std::cout << "__Conv Default constructor__" << std::endl;
}

Conv::Conv( std::string value ) : _value(value)
{
	//std::cout << "__Conv Parametric constructor__" << std::endl;
}

Conv::Conv( const Conv &obj )
{
	//std::cout << "__Conv Copy constructor__" << std::endl;
	*this = obj;
}

Conv	&Conv::operator=( const Conv &obj )
{
	//std::cout << "__Conv Assignation operator__" << std::endl;
	_value = obj.getValue();
	return (*this);
}

std::string Conv::getValue() const
{
	return _value;
}

Conv::~Conv()
{
	//std::cout << "__Conv Default destructor__" << std::endl;
}

int Conv::prec(std::string value)
{
	int i = 0;
	int j = 0;
	while (value[i])
	{
		if (value[i] == '.')
		{
			i++;
			while (value[i] && (value[i] >= '0' && value[i] <= '9'))
			{
				i++;
				j++;
			}
			return (j);
		}
		i++;
	}
	return (0);
}

Conv::operator char()
{
	int res = 0;
	char c = 0;
	try
	{
		res = std::stol(_value);
	}
	catch(const std::exception& e)
	{
		std::cerr << "char: Impossible" << '\n';
		return 0;
	}
	if (res >= 32 && res <= 126)
	{
		c = static_cast<char>(res);
		std::cout << "char: '" << c << "'" << std::endl;
	}
	else
	{
		std::cout << "char: Non displayable" << std::endl;
	}
	return res;
}

Conv::operator int()
{
	long long n = 0;
	bool err = false;

	try
	{
		n = std::stoll(_value);
	}
	catch(const std::exception& e)
	{
		std::cerr << "int: Impossible" << '\n';
		err = true;
	}
	if (err == false)
	{
		if (n >= INT32_MIN && n <= INT32_MAX)
			std::cout << "int: " << n << std::endl;
		else
			std::cout << "int: out of range" << std::endl;
	}
	return n;
}


Conv::operator float()
{
	float f = 0;

	try
	{
		f = std::stof(_value);
	}
	catch(const std::exception& e)
	{
		std::cerr << "float: Impossible" << '\n';
	}
	std::cout << "float: " << std::fixed << std::setprecision(prec(_value)) << f << "f" << std::endl;
	return f;
}

Conv::operator double()
{
	double d = 0.0;

	try
	{
		d = std::stof(_value);
	}
	catch(const std::exception& e)
	{
		std::cerr << "double: Impossible" << '\n';
	}
	std::cout << "double: " << std::fixed << std::setprecision(prec(_value)) << d << std::endl;
	return d;
}
