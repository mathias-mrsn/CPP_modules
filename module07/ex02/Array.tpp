/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 15:35:40 by mamaurai          #+#    #+#             */
/*   Updated: 2022/05/18 10:01:03 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

template<typename T>
class Array
{
	private:
		T* 		_array;
		size_t 	_size;
	public:
		Array (void) : _array(NULL), _size(0) {}
		Array (uint32_t size) : _array(new T[size]), _size(size) {}
		Array (const Array& ref) {*this = ref;}
		~Array (void) {delete [] _array;}

		Array&	 operator=(const Array& ref)
		{
			if (this == &ref) {return *this;}
			
			_array = new T[ref._size];
			_size = ref._size;

			for (size_t i = 0; i < _size; i++)
				_array[i] = ref._array[i];
			return (*this);
		}

		T&	operator[](int elem)
		{
			if (elem > -1 && static_cast<uint32_t>(elem) < _size)
				return (_array[elem]);
			else
				throw ElemOutOfArray();
		};

		int	size(void)
		{
			return (_size);
		}

		class ElemOutOfArray : public std::exception
		{
			public:
				virtual const char * what (void) const throw() {return "Element number is out of the array";}
		};
};

#endif