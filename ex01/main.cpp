/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raitmous <raitmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 02:32:59 by raitmous          #+#    #+#             */
/*   Updated: 2023/11/26 02:55:06 by raitmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main () {
    Data data(7, 'R');

    uintptr_t ptr = Serializer::serialize(&data);
    
    std::cout << "ptr = " << ptr << std::endl << "----------------------------" << std::endl;
    
    Data *raw = Serializer::deserialize(ptr);
    
    std::cout << "Data->c = " << raw->charachter << std::endl
    << "Data->value = " << raw->value << std::endl; 
}