/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygunay <ygunay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 14:03:34 by ygunay            #+#    #+#             */
/*   Updated: 2023/06/15 17:04:30 by ygunay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>

int main(int ac, char **av) 
{
	if(ac > 1)
	{
		for(int i =1; i < ac; i++)
		{
			std::string 	str = av[i];
			int length = str.length();
			for(int j =0; j < length; j++)
			{
				char c = toupper(str[j]);
				std:: cout << c;
			}			
		}
		std::cout << std:: endl;
	}
	if(ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std:: endl ;
	return 0;
}

