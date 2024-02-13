/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouaammo <mouaammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 18:16:36 by mouaammo          #+#    #+#             */
/*   Updated: 2024/01/08 18:16:37 by mouaammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <deque>
#include <stack>

template <typename Type, typename Containter = std::deque<Type> >
class MutantStack : public std::stack<Type , Containter>
{
    public:
        MutantStack(void){};
        ~MutantStack(void){};
        MutantStack(MutantStack const &to_copy)
        {
            *this = to_copy;
        }
        MutantStack &operator=(MutantStack const &to_copy)
        {
            if (this != &to_copy)
                this->c = to_copy.c;
            return (*this);
        }

        typedef typename Containter::iterator iterator;

        iterator begin()
        {
            return (this->c.begin());
        }
        iterator end()
        {
            return (this->c.end());
        }
};