/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raitmous <raitmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 05:09:57 by raitmous          #+#    #+#             */
/*   Updated: 2023/11/26 05:18:20 by raitmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main() {
    srand(time(0));
    
    for (int i = 0; i < 10; i++) {
        Base *obj = generate();
		
        std::cout << "*******************************" << std::endl;
        std::cout << "--------pointer identify-------" << std::endl;
        identify(obj);
        std::cout << "-------refrence identify-------" << std::endl;
        identify(*obj);
        std::cout << "*******************************" << std::endl;
		
        delete obj;
    }
    
}