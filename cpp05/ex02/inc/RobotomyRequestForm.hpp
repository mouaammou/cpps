/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouaammo <mouaammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 19:41:38 by mouaammo          #+#    #+#             */
/*   Updated: 2023/10/12 21:58:31 by mouaammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AForm.hpp"

class RobotomyRequestForm: public AForm
{
	private:
		std::string	the_target;
		RobotomyRequestForm();//default constructor

	public:
		~RobotomyRequestForm();//default destructor
		RobotomyRequestForm(const RobotomyRequestForm &other);//copy construtor
		const RobotomyRequestForm& operator=(const RobotomyRequestForm &other);//copy assignment

		RobotomyRequestForm(const std::string& target);//constructor

		int execute(Bureaucrat const & executor) const;//execute the form
};
