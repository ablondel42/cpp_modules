/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 16:08:32 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/29 17:08:24 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

template < typename T >
class	Array
{
	private:
		T			*_t;
		unsigned	_size;
	protected:
		/* data */
	public:
		Array()
		{
			_t = new T[1];
			_t[0] = 0;
		}
		Array( unsigned int n )
		{
			_t = new T[n];
			_size = n - 1;
			for (size_t i = 0; i < _size; i++)
				_t[i] = 0;
		}
		unsigned	getSize() const
		{
			return _size;
		}
		T			*getTab() const
		{
			return _t;
		}
		Array( const Array &obj )
		{
			T *ref = obj.getTab();
			_size = obj.getSize();
			_t = new T[_size];
			for (size_t i = 0; i < _size; i++)
				_t[i] = ref[i];
		}
		Array &operator=( const T &obj )
		{
			T *ref = obj.getTab();
			_size = obj.getSize();
			delete [] _t;
			_t = new T[_size];
			for (size_t i = 0; i < _size; i++)
				_t[i] = ref[i];
			return (*this);
		}
		T &operator[](int index)
		{
			if (index < 0 || index > static_cast<int>(_size))
				throw ( std::exception() );
			else
				return _t[index];
		}
		~Array() {};
};



#endif