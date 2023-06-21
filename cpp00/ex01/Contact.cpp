/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasingunay <yasingunay@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 16:19:32 by yasingunay        #+#    #+#             */
/*   Updated: 2023/06/21 16:24:41 by yasingunay       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"


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
