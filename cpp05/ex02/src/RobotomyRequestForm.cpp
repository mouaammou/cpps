/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouaammo <mouaammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 19:17:04 by mouaammo          #+#    #+#             */
/*   Updated: 2023/10/13 09:48:03 by mouaammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
{
	//default constructor
}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target)
			:AForm("Roboromy Form", 72, 45), the_target(target)
{
	//constructor
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	//Destructor
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other):AForm(other)
{
	*this = other;//copy constructor
}
const RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
	//copy assingment
	if (this != &other)
	{
		this->the_target = other.the_target;
	}
	return (*this);
}

//Makes some drilling noises
int RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (this->isSigned() && executor.getGrade() <= this->getExecGrade())//exce grade should be high enaugh
	{
		static int half;
		std::cout << "*-*	Robotomy Drailing Noises	*-*" << std::endl;

		if (half % 2 == 0)
			std::cout << this->the_target <<" has been robotomized" << std::endl;
		else
			std::cout << "the robotomy failed" << std::endl;
		return (1);
	}
	else if (this->isSigned() == false)
		throw FormNotSigned();
	else
		throw GradeTooLowException();
	return (0);
}

