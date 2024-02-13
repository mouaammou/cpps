/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouaammo <mouaammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 02:58:52 by mouaammo          #+#    #+#             */
/*   Updated: 2023/12/27 20:26:47 by mouaammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

#include <iostream>

template <class T>
Array<T>::~Array()
{
	delete[] myarray;
}

template <class T>
Array<T>::Array() : myarray(NULL), len(0) {} // default constructor

template <class T>
Array<T>::Array(unsigned int n) // constructor with n parameter
{
	myarray = new T[n];
	len = n;
}

template <class T>
Array<T>::Array(const Array<T> &other) // copy constructor
{
	this->len = other.len;
	myarray = new T[len];
	for (int i = 0; i < other.len; i++)
		myarray[i] = other.myarray[i];
}

template <class T>
const Array<T>& Array<T>::operator=(const Array<T> &other)//copy assignment constructor
{
	if (this != &other)
	{
		if (myarray)
			delete[] myarray;
		myarray = new T[len];
		this->len = other.len;
		for (int i = 0; i < other.len; i++)
			myarray[i] = other.myarray[i];
	}
	return (*this);
}

template <class T>
T &Array<T>::operator[](int index) const//subscript operator[]
{
	if (index >= this->len || index < 0)
		throw std::out_of_range("ERR: Index out of Bounds");
	else
		return (myarray[index]);
}

template <class T>
int Array<T>::size() const
{
	return (this->len);
}
