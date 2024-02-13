/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouaammo <mouaammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 22:03:22 by mouaammo          #+#    #+#             */
/*   Updated: 2023/12/27 20:32:07 by mouaammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template <typename T, typename U>
void	iter(T *array, int len, void (*myfunction)(U &params))
{
	for (int i = 0; i < len; i++)
		myfunction(array[i]);
}

template <typename U>
void	display(U &element)
{
	std::cout << "element: " << element << std::endl;
}
