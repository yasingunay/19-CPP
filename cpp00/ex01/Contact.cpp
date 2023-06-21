/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasingunay <yasingunay@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 16:19:32 by yasingunay        #+#    #+#             */
/*   Updated: 2023/06/21 17:07:46 by yasingunay       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

using namespace std;
#include <iostream>
#include <string>

		Contact::Contact(){
			//cout << "Contact created" << endl; //debug
		}
		Contact::~Contact(){
			//cout << "Contact destroyed" << endl; //debug
		}
		void  Contact::set_first_name(string first_name){
			_first_name = first_name;
		}
		string  Contact::get_first_name(){
			return _first_name;
		}
		void Contact::set_last_name(string last_name){
			_last_name = last_name;
		}
		string Contact::get_last_name(){
			return _last_name;
		}
		void Contact::set_nickname(string nickname){
			_nickname = nickname;
		}
		string Contact::get_nickname(){
			return _nickname;
		}
		void Contact::set_number(string number){
			_number = number;
		}
		string Contact::get_number(){
			return _number;
		}
		void Contact::set_secret(string secret){
			_secret = secret;
		}
		string Contact::get_secret(){
			return _secret;
		}


