/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouaammo <mouaammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 15:35:31 by mouaammo          #+#    #+#             */
/*   Updated: 2023/11/03 20:51:45 by mouaammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "../inc/Bureaucrat.hpp"
class Bureaucrat;

class Form
{
	private:
		const std::string	name;
		bool				signature;
		const int			sign_grade;
		const int			exec_grade;

	public:
		Form();//default constructor
		~Form();//default destructor
		Form(const Form &other);//copy construtor
		const Form& operator=(const Form &other);//copy assignment operator

		Form(std::string nom, int sign_grade, int exec_grade);//parametrized constructor

		// getters for all attributes
		std::string	getName() const;
		bool		isSigned() const;
		int			getSignGrade() const;
		int			getExecGrade() const;

		void	beSigned(Bureaucrat obj);

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

std::ostream& operator<<(std::ostream& stream, const Form& obj);

