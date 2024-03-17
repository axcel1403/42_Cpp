/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmiranda <jmiranda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 23:27:24 by jmiranda          #+#    #+#             */
/*   Updated: 2024/03/17 00:28:24 by jmiranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	add_contact(Contact *contact, int nb_contact)
{
	int	test = 0;
}

int	main(void)
{
	PhoneBook	pb;
	std::string	input;
	int			nb_contact = 0;
	int			i = 0;

	while (1)
	{
		std::cout << std::endl << "Enter a command: " << std::endl;
		std::getline(std::cin, input);
		if (input == "ADD")
		{
			if (nb_contact == 8)
			{
				nb_contact = 0;
				add_contact(pb.contact, nb_contact);
				nb_contact++;
				i++;
			}
		}
		else if (input == "SEARCH")
		{
			
		}
		else if (input == "EXIT")
		{
			break ;
		}
		else
			std::cout << "\033[1;31mInvalid command: Try [ADD, SEARCH or EXIT]\033[0m" << std::endl;
	}
	return (0);
}