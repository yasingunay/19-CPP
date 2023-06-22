/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygunay <ygunay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 16:19:32 by yasingunay        #+#    #+#             */
/*   Updated: 2023/06/22 11:38:08 by ygunay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

//using namespace std;
#include <iostream>
#include <string>

		Contact::Contact(){
			//cout << "Contact created" << endl; //debug
		}
		Contact::~Contact(){
			//cout << "Contact destroyed" << endl; //debug
		}
		void  Contact::set_first_name(std::string first_name){
			_first_name = first_name;
		}
		std::string  Contact::get_first_name(){
			return _first_name;
		}
		void Contact::set_last_name(std::string last_name){
			_last_name = last_name;
		}
		std::string Contact::get_last_name(){
			return _last_name;
		}
		void Contact::set_nickname(std::string nickname){
			_nickname = nickname;
		}
		std::string Contact::get_nickname(){
			return _nickname;
		}
		void Contact::set_number(std::string number){
			_number = number;
		}
		std::string Contact::get_number(){
			return _number;
		}
		void Contact::set_secret(std::string secret){
			_secret = secret;
		}
		std::string Contact::get_secret(){
			return _secret;
		}


