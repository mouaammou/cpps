/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouaammo <mouaammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 18:22:06 by mouaammo          #+#    #+#             */
/*   Updated: 2023/12/25 21:32:09 by mouaammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"


int main()
{
	try
	{
		// Create an array of integers with 5 elements.
		const Array<int> intArray(5);
		// Fill the array with values using the subscript operator.
		for (int i = 0; i < intArray.size(); i++)
		{
			intArray[i] = i * 10;
		}
		// Display the elements.
		std::cout << "Integer Array Elements: ";
		for (int i = 0; i < intArray.size(); i++)
		{
			std::cout << intArray[i] << " ";
		}
		std::cout << std::endl;

		// Create another array of doubles with 3 elements.
		Array<double> doubleArray(3);

		// Fill the double array with values.
		for (int i = 0; i < doubleArray.size(); i++)
		{
			doubleArray[i] = 1.5 * i;
		}

		// Display the double array elements.
		std::cout << "Double Array Elements: ";
		for (int i = 0; i < doubleArray.size(); i++)
		{
			std::cout << doubleArray[i] << " ";
		}
		std::cout << std::endl;

		// Test copy constructor and assignment operator.
		Array<int> copiedIntArray(intArray);
		Array<int> assignedIntArray = intArray;

		// Modify the original and copied arrays and see if they affect each other.
		intArray[0] = 999;
		copiedIntArray[0] = 888;

		std::cout << "Original Array Element [0]: " << intArray[0] << std::endl;
		std::cout << "Copied Array Element [0]: " << copiedIntArray[0] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	return 0;
}
