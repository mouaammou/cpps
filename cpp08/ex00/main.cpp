/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouaammo <mouaammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 07:46:31 by mouaammo          #+#    #+#             */
/*   Updated: 2024/01/08 10:04:01 by mouaammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>
#include <deque>
#include <array>


int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Error: number of arguments\n";
		return (1);
	}
	// VECTOR
	std::vector<int> myvector;
	myvector.push_back(1);
	myvector.push_back(9);
	myvector.push_back(1);
	myvector.push_back(10);
	myvector.push_back(116);
	// LIST
	std::list<int> mylist;
	mylist.push_back(99);
	mylist.push_back(10);
	mylist.push_back(1000);
	mylist.push_back(20);
	mylist.push_back(31);
	// DEQUE
	std::deque<int> myDeque; // Create an empty deque of integers
	myDeque.push_back(10);
	myDeque.push_back(20);
	myDeque.push_back(30);
	myDeque.push_front(5);
	myDeque.push_front(2);
	// ARRAY
	std::array<int, 6> myarray = {2, 16, 77, 34, 50, 10};

	if (easyfind(myvector, atoi(av[1])))
		std::cout << "Not found in VECTOR" << std::endl;
	if (easyfind(mylist, atoi(av[1])))
		std::cout << "Not found in LIST" << std::endl;
	if (easyfind(myDeque, atoi(av[1])))
		std::cout << "Not found in DEQUE" << std::endl;
	if (easyfind(myarray, atoi(av[1])))
		std::cout << "Not found in ARRAY" << std::endl;
	return (0);
}
