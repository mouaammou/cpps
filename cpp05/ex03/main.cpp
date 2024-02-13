/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouaammo <mouaammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 18:34:20 by mouaammo          #+#    #+#             */
/*   Updated: 2023/11/03 21:20:03 by mouaammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Bureaucrat.hpp"
#include "inc/Intern.hpp"
#include "inc/AForm.hpp"

int main()
{
	Intern someRandomIntern;
	AForm* a;
	AForm* b;
	AForm* c;

	a = someRandomIntern.makeForm("Shrubbery Creation Form", "Bender");
	b = someRandomIntern.makeForm("Presidential Pardon Form", "Oden");
	c = someRandomIntern.makeForm("Robotomy Request Form", "Thor");

	delete a;
	delete b;
	delete c;
	return 0;
}
