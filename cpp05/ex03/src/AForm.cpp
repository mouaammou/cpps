/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouaammo <mouaammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 21:47:40 by mouaammo          #+#    #+#             */
/*   Updated: 2023/11/03 05:50:19 by mouaammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../inc/AForm.hpp"

AForm::AForm():name("unkown"), signature(false), sign_grade(0), exec_grade(0)
{
	//default constructor
}

AForm::~AForm()
{
	//destructor
}

AForm::AForm(const AForm &other):name(other.name), signature(other.signature),
	sign_grade(other.sign_grade), exec_grade(other.exec_grade)
{
	// std::cout << "COPY AFORM" << std::endl;
	//copy constructor
}

const AForm& AForm::operator=(const AForm &other)//copy assignment
{
	if (this != &other)
	{
		this->signature = other.signature;
	}
	return (*this);
}

AForm::AForm(std::string nom, int sign_g, int exec_g):name(nom), sign_grade(sign_g), exec_grade(exec_g)//parametrized constructor
{
	//initialized constructor
	this->signature = false;
	if (this->sign_grade < 1 || this->exec_grade < 1)
		throw AForm::GradeTooHighException();
	if (this->sign_grade > 150 || this->exec_grade > 150)
		throw AForm::GradeTooLowException();
	std::cout << "AForm is Initialized" << std::endl;
}
std::string AForm::getName() const
{
	return this->name;
}

bool AForm::isSigned() const
{
	return this->signature;
}

int AForm::getSignGrade() const
{
	return this->sign_grade;
}

int AForm::getExecGrade() const
{
	return this->exec_grade;
}

const char* AForm::GradeTooHighException::what() const throw()
{
	return "grade too high";
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return "grade too low";
}
const char* AForm::FormNotSigned::what() const throw()
{
	return "Form Not Signed";
}
const char *AForm::FormNotExecuted::what() const throw()
{
	return "Form Not Execute";
}


void AForm::beSigned(Bureaucrat bureaucrat)
{
	if (bureaucrat.getGrade() <= this->getSignGrade())
		this->signature = true;
	else
		throw AForm::GradeTooLowException();
}

// Overload of the insertion (<<) operator
std::ostream&	operator<<(std::ostream &stream, const AForm &obj)
{
	stream << "\n----------** AForm inAFormation **-------------\n";
	stream << "AForm Name: " << obj.getName() << std::endl;
	stream << "Is Signed: " << (obj.isSigned() ? "Yes" : "No") << std::endl;
	stream << "Sign Grade: " << obj.getSignGrade() << std::endl;
	stream << "Execute Grade: " << obj.getExecGrade() << std::endl;
	return stream;
}

