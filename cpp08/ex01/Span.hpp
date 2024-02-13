/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouaammo <mouaammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 18:08:55 by mouaammo          #+#    #+#             */
/*   Updated: 2024/01/08 18:08:57 by mouaammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <vector>
#include <iostream>


class Span
{
	private:
		unsigned int	N;
		std::vector<int>	mynumbers;
		Span();
	public:
		~Span();
		Span(const Span &other);
		Span &operator=(const Span &other);

		Span(unsigned int max_numbers);
		
		void	addNumber(unsigned int number);
		int 	shortestSpan();
		int 	longestSpan();

		typedef std::vector<int>::iterator iterator;
		void 	addRangeNumbers(iterator begin, iterator end);

		std::vector<int> getNumbers() const;
};
