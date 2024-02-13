/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouaammo <mouaammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 23:22:06 by mouaammo          #+#    #+#             */
/*   Updated: 2023/11/03 05:32:35 by mouaammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"
class AFrom;

class Intern
{
	public:
		Intern();//default constructor
		~Intern();//default destructor
		Intern(const Intern &other);//copy construtor
		const Intern& operator=(const Intern &other);//copy assignment operator

		AForm* makeForm(const std::string &formName, const std::string &target);
};

