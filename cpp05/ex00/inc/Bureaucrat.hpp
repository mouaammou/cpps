/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouaammo <mouaammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 16:49:20 by mouaammo          #+#    #+#             */
/*   Updated: 2023/11/02 14:19:43 by mouaammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <exception>

class Bureaucrat 
{
	private:
		const std::string	name;
		int					grade;
		Bureaucrat();//default constructor
	public:
		~Bureaucrat();//default destructor
		Bureaucrat(const Bureaucrat &other);//copy construtor
		const Bureaucrat& operator=(const Bureaucrat &other);//copy assignment operator

		Bureaucrat(std::string name, int grade);//parametrized constructor

		int					getGrade() const;
		const std::string	getName() const;
		void	increment();
		void	decrement();

		//exceptions classes
		class	GradeTooHighException : public std::exception
		{
			public:
				const char* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				const char* what() const throw();
		};
};

std::ostream& operator<<(std::ostream& stream, const Bureaucrat& obj);
