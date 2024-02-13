/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouaammo <mouaammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 17:25:06 by mouaammo          #+#    #+#             */
/*   Updated: 2023/11/02 21:41:48 by mouaammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	//default constructor
}

Bureaucrat::~Bureaucrat()
{
	//destructor
}

Bureaucrat::Bureaucrat(const Bureaucrat &other): name(other.name), grade(other.grade)
{
	//copy constructor
}

const Bureaucrat& Bureaucrat::operator=(const Bureaucrat &other)
{
	if (this != &other)
	{
		grade = other.getGrade();
	}
	return (*this);
}
/*******************       Canonial Form Done Here *******************/

std::ostream& operator<<(std::ostream& stream, const Bureaucrat& obj)//overload the operator <<
{
	// <name>, bureaucrat grade <grade>.
	stream << obj.getName() << ", bureaucrat grade " << obj.getGrade() << std::endl;
	return (stream);
}

Bureaucrat::Bureaucrat(std::string name, int grade):name(name)
{
	this->grade = grade;
	if (this->grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (this->grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

const std::string Bureaucrat::getName() const
{
	return (this->name);
}

int Bureaucrat::getGrade() const
{
	return (this->grade);
}

void	Bureaucrat::increment()
{
	this->grade--;
	if (this->grade < 1)
		throw Bureaucrat::GradeTooHighException();
}
void	Bureaucrat::decrement()
{
	this->grade++;
	if (this->grade > 150)
		throw Bureaucrat::GradeTooLowException();
}
const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "grade too high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "grade too low";
}

void Bureaucrat::signForm(AForm &form)
{
	if (form.isSigned())
	{
		std::cout << this->getName() << " signed " << form.getName() << std::endl;
	}
	else
	{
		std::cout << this->getName() << " couldn't sign " << form.getName() << " because ";
		throw AForm::GradeTooLowException();
	}
}

//execute the form
void	Bureaucrat::executeForm(AForm const & form)
{
	if (form.execute(*this))
	{
		std::cout << this->getName() + " executed " + form.getName() << std::endl;
	}
	else
	{
		std::cerr << this->getName()<< " couldn't execute the " + form.getName() + " because ";
		throw AForm::FormNotExecuted();
	}
}
