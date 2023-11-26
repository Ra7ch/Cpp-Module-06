/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raitmous <raitmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 02:20:25 by raitmous          #+#    #+#             */
/*   Updated: 2023/11/26 03:03:44 by raitmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>
#include <stdint.h>


typedef struct Data {
    int     value;
    char    charachter;

    Data (int v, char c);
} Data;

class Serializer {
	public:
	// Constructors
		Serializer();
		Serializer(const Serializer &src);

	// Deconstructors
		~Serializer();

	// Overloaded Operators
		Serializer &operator=(const Serializer &src);

	// Public Methods
		static uintptr_t serialize(Data *ptr);
		static Data* deserialize(uintptr_t raw);
};

#endif