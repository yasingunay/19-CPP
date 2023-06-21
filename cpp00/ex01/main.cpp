/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasingunay <yasingunay@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 06:14:46 by yasingunay        #+#    #+#             */
/*   Updated: 2023/06/21 15:49:34 by yasingunay       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <ctype.h>
using namespace std;

class Contact{
private:
	string _first_name;
	string _last_name;
	string _nickname;
	string _number;
	string _secret;	

public:
	Contact(){
		cout << "Contact created" << endl;
	}
	~Contact(){
		cout << "Contact destroyed" << endl;
	}
	void set_first_name(string first_name){
		_first_name = first_name;
	}
	string get_first_name(){
		return _first_name;
	}
	void set_last_name(string last_name){
		_last_name = last_name;
	}
	string get_last_name(){
		return _last_name;
	}
	void set_nickname(string nickname){
		_nickname = nickname;
	}
	string get_nickname(){
		return _nickname;
	}
	void set_number(string number){
		_number = number;
	}
	string get_number(){
		return _number;
	}
	void set_secret(string secret){
		_secret = secret;
	}
	string get_secret(){
		return _secret;
	}

};


class Phonebook{
private:
	Contact _contacts[8];
	int _index;
	int _nb_contacts;

public:
	Phonebook(){
		this->_index = 0;
		this->_nb_contacts = 0;
		cout << "Phonebook created" << endl;
	}

	~Phonebook(){
		cout << "Phonebook destroyed" << endl;
	}
	
	string _read_info(){
		string str;
		
		getline(cin, str);
		while(str.empty() || str[0] == '\t' || str[0] == '\n' || str[0] == '\v' ||
			str[0] == '\f' || str[0] == ' ' || str[0] == '\r')
		{
			cout << "Please enter a valid input" << endl;
			getline(cin, str);
		}
		return str;
	}
	
	void add(){
		cout << "First Name: ";
		_contacts[this->_index].set_first_name(_read_info());
		cout << "Last Name: ";
		_contacts[this->_index].set_last_name(_read_info());
		cout << "Nickname: ";
		_contacts[this->_index].set_nickname(_read_info());
		cout << "Number: ";
		_contacts[this->_index].set_number(_read_info());
		cout << "Secret: ";
		_contacts[this->_index].set_secret(_read_info());
		cout << "Contact added successfully" << endl;
		this->_index = (this->_index + 1) % 8;
		if(this->_nb_contacts < 8)
			this->_nb_contacts++;
		cout << "Index: " << this->_index << endl;
		cout << "Nb contacts: " << this->_nb_contacts << endl;
	}

	void _print_str(string str){
		if(str.length() > 10)
			cout << str.substr(0, 9) << '.';
		else
			cout << string(10 - str.length(), ' ') << str;
	}
	

	void _print_contact(int index){
		cout << "First Name: " << this->_contacts[index].get_first_name() << endl;
		cout << "Last Name: " << this->_contacts[index].get_last_name() << endl;
		cout << "Nickname: " << this->_contacts[index].get_nickname() << endl;
		cout << "Number: " << this->_contacts[index].get_number() << endl;
		cout << "Secret: " << this->_contacts[index].get_secret() << endl;
	}

	int _read_index(){
		int index = 0;
		string str;

		while(!cin.eof())
		{
			cout << "Select an index: ";
			getline(cin, str);
			if(str.empty() || str[0] == '\t' || str[0] == '\n' || str[0] == '\v' || str[0] == '\f' || str[0] == ' ' || str[0] == '\r' || !isdigit(str[0]) || str[0] == '0' || stoi(str) > this->_nb_contacts)
				cout << "Please enter a valid index" << endl;
			else if (isdigit(str[0]))
				index = stoi(str);
			if(index > 0 && index <= this->_nb_contacts)
				break;
		}
		return index;;
	}
	


	void search(){
		if(this->_nb_contacts == 0)
		{
			cout << "Phonebook is empty" << endl;
			return;
		}
		cout << " ------------------------------------------ " << std::endl;
		cout << "|    Index|First name| Last name|  Nickname|" << std::endl;
		cout << "|---------|----------|----------|--------- |" << std::endl;
		for(int i = 0; i < this->_nb_contacts; i++)
		{
			cout << '|' << "        " << i + 1 << '|';
			_print_str(this->_contacts[i].get_first_name());
			cout << '|';
			_print_str(this->_contacts[i].get_last_name());
			cout << '|';
			_print_str(this->_contacts[i].get_nickname());
			cout << '|' << endl;
		}
		cout << " ----------------------------------------- " << std::endl;
		
		_print_contact(_read_index() - 1);
		
	}
	
};

int main()
{
	Phonebook phonebook;
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
