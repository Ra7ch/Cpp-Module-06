/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raitmous <raitmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 11:37:03 by raitmous          #+#    #+#             */
/*   Updated: 2023/11/26 06:17:09 by raitmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

// Constructor.
ScalarConverter::ScalarConverter() {}
ScalarConverter::ScalarConverter(const ScalarConverter& other) {
	*this = other;
}
ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other) {
	(void) other;
	return (*this);
}
ScalarConverter::~ScalarConverter () {}

// Member Functions.
bool ScalarConverter::isDigit(char c) {
    return (c >= '0' && c <= '9');
}

int ScalarConverter::isFloatOrDoubleOrInt(const std::string& str)
{
	int checkPoint = 0;
	int checkF = 0;
    
	if (str == "-inff" || str == "+inff" || str == "nanf") {
		return 4; // float
	}
    else if (str == "-inf" || str == "+inf" || str == "nan") {
        return 5; // double
    }
    if (!isDigit(str[0]) && str[0] != '-' && str[0] != '+')
        return 0;
    for (long unsigned int i = 1; i < str.length(); i++)
    {
        if (i != str.length() - 1 && (!isDigit(str[i]) && str[i] != '.'))
            return 0;
        if (str[i] == '.')
            checkPoint++;
    }
    if (str[str.length() - 1] == 'f')
        checkF = 1;
    if (!checkF && !isDigit(str[str.length() - 1]))
        return 0;
    if (checkF && checkPoint == 1) // its float.
        return 1;
    if (checkPoint > 1)
        return 0;
    if (!checkF && checkPoint == 1) // its double.
        return 2;
    if (!checkF && !checkPoint) // its int.
        return 3;
    return 0;
}

void ScalarConverter::printInfo(long intValue, float floatValue, double doubleValue, char charValue) {

   // bool i;

	if (intValue > std::numeric_limits<int>::max() || intValue < std::numeric_limits<int>::min())
		std::cout << "int Vlaue : Impossible" << std::endl;
	else
		std::cout << "int Vlaue : " << intValue << std::endl;
	std::cout << "float Value : " << std::fixed << std::setprecision(1) << floatValue << "f" << std::endl;
	std::cout << "double Value : " << std::fixed << std::setprecision(4) << doubleValue << std::endl;
	if (intValue >= 32 && intValue <= 126) {
        // Convert integer to corresponding character
		std::cout << "char Value : '" << charValue << "'" << std::endl;
    } else if ((intValue >= 0 && intValue <= 31) || intValue == 127) {
        // Non-displayable characters
        std::cout << "char Value : Non displayable" << std::endl; // Error code for non-displayable character
    } else {
		// Out of range
		std::cout << "char Value : Impossible." << std::endl; // Error code for out of range
    }
}

void ScalarConverter::printInfoScience(const std::string& arg) {
	std::string str = arg;
	std::cout << "int Vlaue : Impossible" << std::endl;
	std::cout << "float Value : " << str << std::endl;
	str[str.length() - 1] = 0;
	std::cout << "double Value : " << str << std::endl;
	std::cout << "char Value : Impossible." << std::endl;
}

void ScalarConverter::printInfoFun(const std::string& str) {
	std::cout << "int Vlaue : Impossible" << std::endl;
	std::cout << "float Value : " << str << "f" << std::endl;
	std::cout << "double Value : " << str << std::endl;
	std::cout << "char Value : Impossible." << std::endl;
}

void ScalarConverter::convert (const std::string& str) {
			std::stringstream s(str);
			long intValue;
			float floatValue;
			double doubleValue;
			char charValue;
            ScalarConverter obj;
			

			if (!obj.isDigit(str[0]) && !str[1])
			{
				charValue = str[0];
				intValue = static_cast<int>(charValue);
				floatValue = static_cast<float>(intValue);
				doubleValue = static_cast<double>(intValue);
				obj.printInfo(intValue, floatValue, doubleValue, charValue);
			}
			else if (obj.isFloatOrDoubleOrInt(str) == 3) //int
			{
				s >> intValue;
				floatValue = static_cast<float>(intValue);
				doubleValue = static_cast<double>(intValue);
				if (intValue >= 32 && intValue <= 126) {
					// Convert integer to corresponding character
					charValue =  static_cast<char>(intValue);
				}
				obj.printInfo(intValue, floatValue, doubleValue, charValue);
			}
			else if (obj.isFloatOrDoubleOrInt(str) == 1) { //float
				s >> floatValue;
				intValue = static_cast<long>(floatValue);
				doubleValue = static_cast<double>(floatValue);
				if (intValue >= 32 && intValue <= 126) {
					// Convert integer to corresponding character
					charValue =  static_cast<char>(intValue);
				}
				obj.printInfo(intValue, floatValue, doubleValue, charValue);
			}
			else if (obj.isFloatOrDoubleOrInt(str) == 2) { //double
				s >> doubleValue;
				intValue = static_cast<long>(doubleValue);
				floatValue = static_cast<float>(doubleValue);
				if (intValue >= 32 && intValue <= 126) {
					// Convert integer to corresponding character
					charValue =  static_cast<char>(intValue);
				}
				obj.printInfo(intValue, floatValue, doubleValue, charValue);
			}
			else if (obj.isFloatOrDoubleOrInt(str) == 4)
				obj.printInfoScience(str);
			else if (obj.isFloatOrDoubleOrInt(str) == 5)
				obj.printInfoFun(str);
			else
				std::cout << "Your input is invalid or isnt of any type of the spicified types." << std::endl;
}
