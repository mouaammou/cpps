/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouaammo <mouaammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 23:33:30 by mouaammo          #+#    #+#             */
/*   Updated: 2023/11/03 21:21:11 by mouaammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Intern.hpp"

Intern::Intern()
{
	// default constructor
}

Intern::~Intern()
{
	// Destructor
}

Intern::Intern(const Intern &other)
{
	*this = other; // copy constructor
}
const Intern &Intern::operator=(const Intern &other)
{
	// copy assingment
	(void)other;
	return (*this);
}

AForm *Intern::makeForm(const std::string &formName, const std::string &target)
{
	const std::string formNames[] = {
		"Robotomy Request Form",
		"Presidential Pardon Form",
		"Shrubbery Creation Form"};

	AForm *forms[] = {
		new RobotomyRequestForm(target),
		new PresidentialPardonForm(target),
		new ShrubberyCreationForm(target)};
	for (int i = 0; i < 3; i++)
	{
		if (formNames[i] == formName)
		{
			std::cout << "Intern creates " << formName << std::endl;
			int j = 0;
			while (j < 3) // delete unused memory
			{
				if (i == j)
				{
					j++;
					continue;
				}
				delete forms[j];
				j++;
			}
			return forms[i];
		}
	}

	std::cout << "Error: Unknown form name" << std::endl;
	return NULL;
}
