/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouaammo <mouaammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 18:14:11 by mouaammo          #+#    #+#             */
/*   Updated: 2024/01/08 18:14:13 by mouaammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main() {
    try {
        const unsigned int maxSize = 10000;
        Span span(maxSize);

        // Generate and add 10,000 random numbers to the Span
        std::srand(std::time(0));
        for (unsigned int i = 0; i < maxSize; ++i) {
            int num = std::rand() + 100;
            span.addNumber(num % 10000);
        }

        // Calculate the shortest and longest spans
        int shortest = span.shortestSpan();
        int longest = span.longestSpan();


        //add range of numbers
        std::vector<int> v;
        for (int i = 0; i < 10; i++)
            v.push_back(i + 1);

        span.addRangeNumbers(v.begin(), v.end());

        //print span
        std::vector<int> numbers = span.getNumbers();
        for (std::vector<int>::iterator it = numbers.begin(); it != numbers.end(); ++it)
            std::cout << *it << std::endl;

        std::cout << "Shortest span: " << shortest << std::endl;
        std::cout << "Longest span: " << longest << std::endl;

    } catch (const std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    return 0;
}