/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouaammo <mouaammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 19:44:45 by mouaammo          #+#    #+#             */
/*   Updated: 2023/11/03 05:53:25 by mouaammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
{
	//default constructor
}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target):AForm("Presidential Pardon Form", 25, 5), the_target(target)
{
	//constructor
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	//Destructor
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other):AForm(other)
{
	*this = other;//copy constructor
}
const PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
	//copy assingment
	if (this != &other)
	{
		this->the_target = other.the_target;
	}
	return (*this);
}

int	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (this->isSigned() && executor.getGrade() <= this->getExecGrade())
	{
		std::cout << "the " << this->the_target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
		return (1);
	}
	else if (this->isSigned() == false)
		throw FormNotSigned();
	else
		throw GradeTooLowException();
	return (0);
}


