/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouaammo <mouaammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 07:46:40 by mouaammo          #+#    #+#             */
/*   Updated: 2024/01/08 07:46:43 by mouaammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <iterator>
#include <algorithm>

template <typename T>
int easyfind(T numbers, int num)
{
	typename T::iterator it;
	if ((it = std::find(numbers.begin(), numbers.end(), num)) != numbers.end())
		std::cout << "number found in position: " << std::distance(numbers.begin(), it) << std::endl;
	else
		return (1);
	return (0);
}
