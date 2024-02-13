/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouaammo <mouaammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 16:08:19 by mouaammo          #+#    #+#             */
/*   Updated: 2023/11/02 15:41:04 by mouaammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Form.hpp"

Form::Form():name("unkown"), signature(false), sign_grade(0), exec_grade(0)
{
	//default constructor
}

Form::~Form()
{
	//destructor
}

Form::Form(const Form &other):name(other.name), signature(other.signature),
	sign_grade(other.sign_grade), exec_grade(other.exec_grade)
{
	//copy constructor
}

const Form& Form::operator=(const Form &other)//copy assignment
{
	if (this != &other)
	{
		this->signature = other.signature;
	}
	return (*this);
}

Form::Form(std::string nom, int sign_grade, int exec_grade):name(nom), sign_grade(sign_grade), exec_grade(exec_grade)
{
	//initialized constructor
	this->signature = false;
	if (this->sign_grade < 1 || this->exec_grade < 1)
		throw Form::GradeTooHighException();
	if (this->sign_grade > 150 || this->exec_grade > 150)
		throw Form::GradeTooLowException();
	std::cout << "Form is Initialized" << std::endl;
}
std::string Form::getName() const
{
	return this->name;
}

bool Form::isSigned() const
{
	return this->signature;
}

int Form::getSignGrade() const
{
	return this->sign_grade;
}

int Form::getExecGrade() const
{
	return this->exec_grade;
}

const char* Form::GradeTooHighException::what() const throw()
{
	return "grade too high";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "grade too low";
}

void Form::beSigned(Bureaucrat bureaucrat)
{
	if (bureaucrat.getGrade() <= this->getSignGrade())
		this->signature = true;
	else
		throw Form::GradeTooLowException();
}

// Overload of the insertion (<<) operator
std::ostream &operator<<(std::ostream &stream, const Form &obj)
{
	stream << "\n----------** Form information **-------------\n";
	stream << "Form Name: " << obj.getName() << std::endl;
	stream << "Is Signed: " << (obj.isSigned() ? "Yes" : "No") << std::endl;
	stream << "Sign Grade: " << obj.getSignGrade() << std::endl;
	stream << "Execute Grade: " << obj.getExecGrade() << std::endl;
	return stream;
}
