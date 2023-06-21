/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasingunay <yasingunay@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 15:56:44 by yasingunay        #+#    #+#             */
/*   Updated: 2023/06/21 16:17:58 by yasingunay       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

class PhoneBook
{
	private:
		Contact _contacts[8];
		int _index;
		int _nb_contacts;

	
		string _read_info();
		void _print_str(string str);
		void _print_contact(int index);
		int _read_index;

	public:
		PhoneBook(); // constructor
		~PhoneBook(); // destructor
		void add();
		void search();
	
};




#endif
