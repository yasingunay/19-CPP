/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasingunay <yasingunay@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 06:14:46 by yasingunay        #+#    #+#             */
/*   Updated: 2023/06/21 16:20:08 by yasingunay       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <string>
#include <ctype.h>
using namespace std;


int main()
{
	PhoneBook phonebook;
	string command;
	do
	{
		cout << "Please enter your command: (ADD, SEARCH, EXIT)" << endl;
		getline(cin, command);
		if(command == "ADD")
			phonebook.add();
		else if(command == "SEARCH")
			phonebook.search();
		else
			cout << "Command is not valid!" << endl;
	}while(command != "EXIT");
	return 0;
}
