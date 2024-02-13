/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouaammo <mouaammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 21:49:14 by mouaammo          #+#    #+#             */
/*   Updated: 2023/11/03 05:53:21 by mouaammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
{
	//default constructor
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	//destrutor
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other):AForm(other)
{
	//COPY CONSTRUCTOR
	*this = other;
}

const ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	//COPY ASSIGNMENT
	if (this != &other)
	{
		this->the_target = other.the_target;
	}
	return *this;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target):AForm("Shrubbery Creation Form", 145, 137), the_target(target)
{
	//PARAMETRIZED CONSTRUCTOR
}

int ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	std::ofstream myfile(this->the_target + "_shrubbery");
	if (this->isSigned() && executor.getGrade() <= this->getExecGrade())
	{
		if (myfile.is_open())
		{
			std::cout << "create the file " + this->the_target + "_shrubbery successully" << std::endl;
			displayAscciTree(myfile);
		}
		else
			std::cout << "ERROR: failed to open the file" << std::endl;
		return (1);
	}
	else if (this->isSigned() == false)
		throw FormNotSigned();
	else
		throw GradeTooLowException();
	return (0);
}


void displayAscciTree(std::ofstream &file)
{
	file << "			;'''''       ;%;  %%;        ,     %;    ;%;    ,%''''" << '\n'
		 << "					%;       %;%;      ,  ;       %;  ;%;   ,%;' " << '\n'
		 << '\n'
		 << "					;%;      %;        ;%;        % ;%;  ,%;'" << '\n'
		 << "						`%;.     ;%;     %;'         `;%%;.%;'" << '\n'
		 << "						`:;%.    ;%%. %@;        %; ;@%;%'" << '\n'
		 << "							`:%;.  :;bd%;          %;@%;'" << '\n'
		 << "							`@%:.  :;%.         ;@@%;'" << '\n'
		 << "								`@%.  `;@%.      ;@@%;" << '\n'
		 << "								`@%%. `@%%    ;@@%;" << '\n'
		 << "									;@%. :@%%  %@@%;" << '\n'
		 << "									%@bd%%%bd%%:;" << '\n'
		 << "									#@%%%%%:;;" << '\n'
		 << "									%@@%%%::;" << '\n'
		 << "									%@@@%(o);  . '" << '\n'
		 << "									%@@@o%;:(.,' " << '\n'
		 << "									`.. %@@@o%::;" << '\n'
		 << "									`)@@@o%::;" << '\n'
		 << "									%@@(o)::;" << '\n'
		 << "									.%@@@@%::;" << '\n'
		 << "									;%@@@@%::;." << '\n'
		 << "									;%@@@@%%:;;;. " << '\n'
		 << "								...;%@@@@@%%:;;;;,.." << '\n';
	file.close();
}
