/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouaammo <mouaammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 19:41:51 by mouaammo          #+#    #+#             */
/*   Updated: 2023/11/03 05:53:33 by mouaammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	private:
		std::string	the_target;
		PresidentialPardonForm();//default constructor

	public:
		~PresidentialPardonForm();//default destructor
		PresidentialPardonForm(const PresidentialPardonForm &other);//copy construtor
		const PresidentialPardonForm& operator=(const PresidentialPardonForm &other);//copy assignment

		PresidentialPardonForm(const std::string& target);//constructor

		int execute(Bureaucrat const & executor) const;//execute the form
};
