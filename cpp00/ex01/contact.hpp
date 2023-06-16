/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygunay <ygunay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 10:57:00 by ygunay            #+#    #+#             */
/*   Updated: 2023/06/16 11:51:34 by ygunay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
	#define CONTACT_HPP

#include <string>
#include <iostream>

class Contact {
	private:
		std::string first_name;
		std::string last_name;
		std::string number;

	public:
		void set_first_name (const std::string& new_first_name){
			first_name = new_first_name;
		}

		void set_last_name (const std::string& new_last_name){
			last_name = new_last_name;
		}

		void set_number (const std::string& new_number){
			number = new_number;
		}
				
		void introduce(){
			std::cout << "Hello my name is " << first_name << " My surname is " << last_name << " My phone number is " << number << "." << std::endl;
		}
};


#endif	
