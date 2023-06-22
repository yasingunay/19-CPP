/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygunay <ygunay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 06:14:46 by yasingunay        #+#    #+#             */
/*   Updated: 2023/06/22 11:36:40 by ygunay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp" 
#include <iostream> // cout, cin
#include <string> 
#include <ctype.h> // isdigit
//using namespace std; // std::string, std::cout, std::cin


int main()
{
	PhoneBook phonebook;
	std::string command;
	do
	{
		std::cout << "Please enter your command: (ADD, SEARCH, EXIT)" << std::endl;
		std::getline(std::cin, command);
		if(command == "ADD")
			phonebook.add();
		else if(command == "SEARCH")
			phonebook.search();
	 	else if (command != "EXIT") 
           std:: cout << "Invalid command!" << std::endl;
	}while(command != "EXIT"); 
	return 0;
}
