/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouaammo <mouaammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 02:45:41 by mouaammo          #+#    #+#             */
/*   Updated: 2023/12/25 21:32:44 by mouaammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <class T>
class Array
{
	private:
		T*	myarray;
		int len;

	public:
		Array();
		~Array();
		Array(const Array<T> &other);					  // copy constructor
		const Array<T> &operator=(const Array<T> &other); // copy assignment
		
		Array(unsigned int n);

		T& operator[](int index) const;

		int size() const;
};

#include "Array.tpp"
