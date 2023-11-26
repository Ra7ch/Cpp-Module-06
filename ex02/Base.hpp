/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raitmous <raitmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 04:54:07 by raitmous          #+#    #+#             */
/*   Updated: 2023/11/26 06:08:31 by raitmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>
#include <cstdlib>
#include <ctime>

#define YELLOW "\033[2;33m"
#define RED "\033[2;31m"
#define CYAN "\033[2;36m"
#define DEF "\033[0m"

class Base {
public:
    virtual ~Base();  // Public virtual destructor
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

Base * generate(void);
void identify(Base* p);
void identify(Base& p);

#endif