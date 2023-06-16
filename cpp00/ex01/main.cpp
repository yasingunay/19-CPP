/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygunay <ygunay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 11:43:30 by ygunay            #+#    #+#             */
/*   Updated: 2023/06/16 11:46:27 by ygunay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

int main(){
	Contact person1;
	person1.set_first_name("Yasin");
	person1.set_last_name("Gunay");
	person1.set_number("0491192425");
	
	
	person1.introduce();

	return 0;
	
}
