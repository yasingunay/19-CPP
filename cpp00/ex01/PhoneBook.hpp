/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygunay <ygunay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 15:56:44 by yasingunay        #+#    #+#             */
/*   Updated: 2023/06/22 11:52:41 by ygunay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact _contacts[8];
		int _index;
		int _nb_contacts;

	
		std::string _read_info();
		void _print_str(std::string str);
		void _print_contact(int index);
		int _read_index();

	public:
		PhoneBook(); // constructor
		~PhoneBook(); // destructor
		void add();
		void search();
	
};

#endif
