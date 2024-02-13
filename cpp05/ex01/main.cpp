/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouaammo <mouaammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 18:34:20 by mouaammo          #+#    #+#             */
/*   Updated: 2023/11/02 15:50:23 by mouaammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Form.hpp"

int main()
{
	try
	{
		Bureaucrat bureaucrat("John Doe", 4);
		Form form("Example Form", 5, 5);

		std::cout << "Form Name: " << form.getName() << std::endl;
		std::cout << "Is Signed: " << (form.isSigned() ? "Yes" : "No") << std::endl;
		std::cout << "Sign Grade: " << form.getSignGrade() << std::endl;
		std::cout << "Execute Grade: " << form.getExecGrade() << std::endl;

		form.beSigned(bureaucrat);
		std::cout << std::endl;
		std::cout << "Is Signed: " << (form.isSigned() ? "Yes" : "No") << std::endl;

		bureaucrat.signForm(form);
		std::cout << form;
		std::cout << "\n---------** Bureaucrat Info **-----------" << std::endl;
		std::cout << bureaucrat;
	}
	catch (std::exception &e)//generale exception handled of all excetion and its dirived classes
	{
		std::cout << "Exception occurred: " << e.what() << std::endl;
	}

	return 0;
}
