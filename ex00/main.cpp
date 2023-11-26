/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raitmous <raitmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 09:21:42 by raitmous          #+#    #+#             */
/*   Updated: 2023/11/25 10:13:30 by raitmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main (int argc, char **argv) {
    if (argc < 2)
		return (std::cout << "You havent inputed any literal string" << std::endl, 0);
	const std::string str = argv[1];
	ScalarConverter::convert(argv[1]);
}