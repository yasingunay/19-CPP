/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygunay <ygunay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 06:14:46 by yasingunay        #+#    #+#             */
/*   Updated: 2023/06/21 17:27:05 by ygunay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
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
	 	else if (command != "EXIT")
            cout << "Invalid command!" << endl;
	}while(command != "EXIT");
	return 0;
}
