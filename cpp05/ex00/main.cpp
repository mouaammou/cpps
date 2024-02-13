/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouaammo <mouaammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 16:46:43 by mouaammo          #+#    #+#             */
/*   Updated: 2023/11/03 06:02:38 by mouaammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Bureaucrat.hpp"

int main() {
	try {
		// Create a Bureaucrat with a name and grade
		Bureaucrat boss("BOSS", 2);
		Bureaucrat beginner("beginner", 150);

		// Get and print the bureaucrat's name and grade
		std::cout << "Bureaucrat Name: " << boss.getName() << std::endl;
		std::cout << "Bureaucrat Grade: " << beginner.getGrade() << std::endl;

		// Increment and decrement the grade
		boss.increment();
		std::cout << "Incremented Grade: " << boss.getGrade() << std::endl;
		boss.decrement();
		std::cout << "Decremented Grade: " << boss.getGrade() << std::endl;
		
		std::cout << boss;
		std::cout << beginner;

		// Attempt to create a bureaucrat with an invalid grade (exception will be thrown)
		Bureaucrat invalidBureaucrat("Invalid Bureaucrat", 155);
		std::cout << invalidBureaucrat;

		// The following line won't be executed if an exception is thrown
		std::cout << "This won't be printed if the previous line throws an exception." << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	return 0;
}
