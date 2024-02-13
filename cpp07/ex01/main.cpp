/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouaammo <mouaammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 21:05:55 by mouaammo          #+#    #+#             */
/*   Updated: 2023/12/25 20:45:09 by mouaammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
	int intArray[5] = {1, 2, 3, 4, 5};
	double doubleArray[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
	std::string stringArray[5] = {"apple", "banana", "cherry", "date", "fig"};
	// Call the iter function template with different types and functions.
	iter(intArray, 5, display<const int>);
	std::cout << std::endl;
	iter(doubleArray, 5, display<const double>);
	std::cout << std::endl;
	iter(stringArray, 5, display<std::string>);
	std::cout << std::endl;
	iter(intArray, 5, display<int>);
	std::cout << std::endl;
	iter(doubleArray, 5, display<double>);
	std::cout << std::endl;
	iter(stringArray, 5, display<std::string>);

	return 0;
}
