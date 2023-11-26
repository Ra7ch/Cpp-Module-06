/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raitmous <raitmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 04:55:21 by raitmous          #+#    #+#             */
/*   Updated: 2023/11/26 06:08:59 by raitmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base * generate(void) {
	int choice = rand() % 3;
	
	switch (choice) {
		case 0:
			return (std::cout << YELLOW << "Generating object of type >A<" << DEF << std::endl, new A());
		case 1:
			return (std::cout << RED << "Generating object of type >B<" << DEF << std::endl, new B());
		case 2:
			return (std::cout << CYAN << "Generating object of type >C<" << DEF << std::endl, new C());
		default :
			return NULL;
	}
}

void identify(Base* p) {
	if (dynamic_cast<A*>(p))
		std::cout << YELLOW << "The type of the object pointed to by p is : A" << DEF << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << RED << "The type of the object pointed to by p is : B" << DEF << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << CYAN << "The type of the object pointed to by p is : C" << DEF << std::endl;
	else
		std::cout << "Uknown Type" << std::endl;
}

void identify(Base& p) {
	try {
		A &a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << YELLOW << "The type of the object pointed to by p is : A" << DEF << std::endl;
	} catch (std::exception &e) {
		try {
			B &b = dynamic_cast<B&>(p);
			(void)b;
			std::cout << RED << "The type of the object pointed to by p is : B" << DEF << std::endl;
		} catch (std::exception &e) {
			try {
				C &c = dynamic_cast<C&>(p);
				(void)c;
				std::cout << CYAN << "The type of the object pointed to by p is : C" << DEF << std::endl;
			} catch (std::exception &e) {
				std::cout << "Uknown Type" << std::endl;			}
		}
	}
}

// Base Destructor
Base::~Base() {}