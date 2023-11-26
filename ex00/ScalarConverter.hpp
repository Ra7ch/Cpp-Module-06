/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raitmous <raitmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 03:34:18 by raitmous          #+#    #+#             */
/*   Updated: 2023/11/25 13:40:18 by raitmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <iomanip>
#include <sstream>
#include <limits>

class ScalarConverter {
	private :
		void printInfoFun(const std::string& str);
		void printInfoScience(const std::string& arg);
		void printInfo(long intValue, float floatValue, double doubleValue, char charValue);
		int isFloatOrDoubleOrInt(const std::string& str);
		bool isDigit(char c);

    public :
		ScalarConverter();
		ScalarConverter(const ScalarConverter& other);
		ScalarConverter& operator=(const ScalarConverter& other);
        static void convert (const std::string& str);
		
		~ScalarConverter();
};

#endif