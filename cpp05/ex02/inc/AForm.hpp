/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouaammo <mouaammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 18:45:30 by mouaammo          #+#    #+#             */
/*   Updated: 2023/10/12 21:56:02 by mouaammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "../inc/Bureaucrat.hpp"
class Bureaucrat;

class AForm
{
	private:
		const std::string	name;
		bool				signature;
		const int			sign_grade;
		const int			exec_grade;

	public:
		AForm();//default constructor
		virtual ~AForm();//default destructor
		AForm(const AForm &other);//copy construtor
		const AForm& operator=(const AForm &other);//copy assignment operator

		AForm(std::string nom, int sign_grade, int exec_grade);//parametrized constructor

		// getters for all attributes
		std::string	getName() const;
		bool		isSigned() const;
		int			getSignGrade() const;
		int			getExecGrade() const;

		void	beSigned(Bureaucrat obj);

		//execute the form’s action of the concrete classe
		virtual int execute(Bureaucrat const & executor) const = 0;

		//exceptions classes
		class GradeTooHighException : public std::exception
		{
			public:
				const char* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				const char* what() const throw();
		};
		class FormNotSigned : public std::exception
		{
			public:
				const char* what() const throw();
		};
		class FormNotExecuted : public std::exception
		{
			public:
				const char* what() const throw();
		};
};

std::ostream& operator<<(std::ostream& stream, const AForm& obj);

