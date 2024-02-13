/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouaammo <mouaammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 18:14:03 by mouaammo          #+#    #+#             */
/*   Updated: 2024/01/08 18:14:06 by mouaammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() {} // Default Constructor

Span::~Span() {} // Destructor

Span::Span(const Span &other) // Copy Constructor
{
	*this = other;
}

Span &Span::operator=(const Span &other) // Copy Assignment
{
	if (this != &other)
	{
		this->N = other.N;
		this->mynumbers = other.mynumbers;
	}
	return (*this);
}

Span::Span(unsigned int max_numbers)
{
	N = max_numbers;
}

void Span::addNumber(unsigned int number) // add one number
{
	if (mynumbers.size() > N)
		throw std::runtime_error("Span is full");
	mynumbers.push_back(number);
}

int Span::shortestSpan()
{
	if (mynumbers.size() <= 1)
		throw std::runtime_error("Span is empty or has only one element");
	std::sort(mynumbers.begin(), mynumbers.end());
	int shortest = mynumbers[1] - mynumbers[0];
	for (size_t i = 1; i < mynumbers.size() - 1; i++)
	{
		int diff = mynumbers[i + 1] - mynumbers[i];
		if (diff < shortest)
			shortest = diff;
	}
	return shortest;
}

int Span::longestSpan()
{
	if (mynumbers.size() <= 1)
		throw std::runtime_error("Span is empty or has only one element");
	std::sort(mynumbers.begin(), mynumbers.end());
	return (mynumbers[mynumbers.size() - 1] - mynumbers[0]);
}

void Span::addRangeNumbers(iterator begin, iterator end)
{
	if (mynumbers.size() > N)
		throw std::runtime_error("Span is full");
	else
		mynumbers.insert(mynumbers.end(), begin, end);
}

std::vector<int>		Span::getNumbers() const
{
	return (this->mynumbers);
}