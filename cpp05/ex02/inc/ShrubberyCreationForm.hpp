/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouaammo <mouaammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:34:46 by mouaammo          #+#    #+#             */
/*   Updated: 2023/11/02 21:56:51 by mouaammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm: public AForm
{
	private:
		std::string	the_target;
		ShrubberyCreationForm();//default constructor
	public:
		~ShrubberyCreationForm();//default destructor
		ShrubberyCreationForm(const ShrubberyCreationForm &other);//copy construtor
		const ShrubberyCreationForm& operator=(const ShrubberyCreationForm &other);//copy assignment operator

		ShrubberyCreationForm(const std::string& target);

		int execute(Bureaucrat const & executor) const;
};
void	displayAscciTree(std::ofstream& file);
