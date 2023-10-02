/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelayad <abelayad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 10:59:22 by abelayad          #+#    #+#             */
/*   Updated: 2023/10/02 13:50:41 by abelayad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string	string("HI THIS IS BRAIN");
	std::string	*stringPTR = &string;
	std::string	&stringREF = string;

	std::cout << "Address of string:  " << &string << std::endl;
    std::cout << "Address of stringPTR: " << stringPTR << std::endl;
    std::cout << "Address of stringREF: " << &stringREF << std::endl;
	
	std::cout << "Value of string:  " << string << std::endl;
    std::cout << "Value of *stringPTR: " << *stringPTR << std::endl;
    std::cout << "Value of stringREF: " << stringREF << std::endl;

	return (0);
}