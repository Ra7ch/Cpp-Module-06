/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raitmous <raitmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 02:25:40 by raitmous          #+#    #+#             */
/*   Updated: 2023/11/26 06:22:53 by raitmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

// Data Constructor.
Data::Data (int v, char c) : value(v), charachter(c) {}

// Serializer Constructors
Serializer::Serializer() {}
Serializer::Serializer(const Serializer &other) {
	*this = other;
}

// Serializer Overloaded Operators
Serializer& Serializer::operator=(const Serializer &other){
	(void) other;
	return (*this);
}

// Serializer Deconstructors
Serializer::~Serializer() {}

// Serializer Member Functions

uintptr_t Serializer::serialize(Data* ptr) {
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data *Serializer::deserialize(uintptr_t raw) {
	return (reinterpret_cast<Data *>(raw));
}
