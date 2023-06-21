/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasingunay <yasingunay@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 16:20:17 by yasingunay        #+#    #+#             */
/*   Updated: 2023/06/21 16:45:01 by yasingunay       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>

class Contact
{
	private:
		std::string _first_name;
		std::string _last_name;
		std::string _nickname;
		std::string _number;
		std::string _secret;
			
	public:
		Contact();//constructor
		~Contact();//destructor

		
		// Getters
		void set_first_name(std::string first_name);
		void set_last_name(std::string last_name);
		void set_nickname(std::string nickname);
		void set_number(std::string number);
		void set_secret(std::string secret);
		
		// Setters
		std::string get_first_name();
		std::string get_last_name();
		std::string get_nickname();
		std::string get_number();
		std::string get_secret();
		
	
};


#endif
