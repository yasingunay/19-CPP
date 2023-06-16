/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygunay <ygunay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 11:43:30 by ygunay            #+#    #+#             */
/*   Updated: 2023/06/16 13:33:25 by ygunay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

int main(){

	std:: string command;

	std::cout << "Enter a command(ADD, SEARCH or EXIT)" << std::endl;
	std:: getline(std::cin, command);
	
	if(command == "ADD")
	{
		Contact person1;
		std::cout << "Enter a first name: ";
		std:: string first_name;
		std:: getline(std::cin, first_name);
		person1.set_first_name(first_name);
		person1.set_last_name("Gunay");
		person1.set_number("0491192425");

		person1.introduce();
	
	}
	
	
	

	return 0;
	
}
