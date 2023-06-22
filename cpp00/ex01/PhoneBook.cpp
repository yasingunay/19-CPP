/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygunay <ygunay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 15:58:47 by yasingunay        #+#    #+#             */
/*   Updated: 2023/06/22 11:40:26 by ygunay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "PhoneBook.hpp"
//using namespace std;

	PhoneBook::PhoneBook()
	{
		this->_index = 0;
		this->_nb_contacts = 0;
		std::cout << "Phonebook created" << std::endl;
	}

	PhoneBook::~PhoneBook()
	{
		std::cout << "Phonebook destroyed" << std::endl; 
	}
	
	std::string PhoneBook::_read_info(){
		std::string str;
		
		getline(std::cin, str);
		while(str.empty() || str[0] == '\t' || str[0] == '\n' || str[0] == '\v' ||
			str[0] == '\f' || str[0] == ' ' || str[0] == '\r')
		{
			std::cout << "Please enter a valid input" << std::endl;
			getline(std::cin, str);
		}
		return str;
	}
	
	void PhoneBook:: add(){
		std::cout << "First Name: ";
		_contacts[this->_index].set_first_name(_read_info());
		std::cout << "Last Name: ";
		_contacts[this->_index].set_last_name(_read_info());
		std::cout << "Nickname: ";
		_contacts[this->_index].set_nickname(_read_info());
		std::cout << "Number: ";
		_contacts[this->_index].set_number(_read_info());
		std::cout << "Secret: ";
		_contacts[this->_index].set_secret(_read_info());
		std::cout << "Contact added successfully" << std::endl;
		this->_index = (this->_index + 1) % 8;
		if(this->_nb_contacts < 8)
			this->_nb_contacts++;
		//cout << "Index: " << this->_index << endl; //debug
		//cout << "Nb contacts: " << this->_nb_contacts << endl; //debug
	}

	void PhoneBook::_print_str(std::string str){
		if(str.length() > 10)
			std::cout << str.substr(0, 9) << '.';
		else
			std::cout << std::string(10 - str.length(), ' ') << str;
	}
	

	void PhoneBook::_print_contact(int index){
		std::cout << "First Name: " << this->_contacts[index].get_first_name() << std::endl;
		std::cout << "Last Name: " << this->_contacts[index].get_last_name() << std::endl;
		std::cout << "Nickname: " << this->_contacts[index].get_nickname() << std::endl;
		std::cout << "Number: " << this->_contacts[index].get_number() << std::endl;
		std::cout << "Secret: " << this->_contacts[index].get_secret() << std::endl;
	}

	int PhoneBook::_read_index(){
		int index = 0;
		std::string str;

		while(!std::cin.eof())
		{
			std::cout << "Select an index: ";
			getline(std::cin, str);
			if(str.empty() || str[0] == '\t' || str[0] == '\n' || str[0] == '\v' || str[0] == '\f' || str[0] == ' ' || str[0] == '\r' || !isdigit(str[0]) || str[0] == '0' || stoi(str) > this->_nb_contacts)
				std::cout << "Please enter a valid index" << std::endl;
			else if (isdigit(str[0]))
				index = stoi(str);
			if(index > 0 && index <= this->_nb_contacts)
				break;
		}
		return index;;
	}
	


	void PhoneBook::search(){
		if(this->_nb_contacts == 0)
		{
			std::cout << "Phonebook is empty" << std::endl;
			return;
		}
		std::cout << " ------------------------------------------ " << std::endl;
		std::cout << "|    Index|First name| Last name|  Nickname|" << std::endl;
		std::cout << "|---------|----------|----------|--------- |" << std::endl;
		for(int i = 0; i < this->_nb_contacts; i++)
		{
			std::cout << '|' << "        " << i + 1 << '|';
			_print_str(this->_contacts[i].get_first_name());
			std::cout << '|';
			_print_str(this->_contacts[i].get_last_name());
			std::cout << '|';
			_print_str(this->_contacts[i].get_nickname());
			std::cout << '|' << std::endl;
		}
		std::cout << " ----------------------------------------- " << std::endl;
		
		_print_contact(_read_index() - 1);
		
	}
	
