/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmiranda <jmiranda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 23:27:24 by jmiranda          #+#    #+#             */
/*   Updated: 2024/03/17 03:45:31 by jmiranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	isDigit(std::string input) {
	int	check;
	
	for (size_t i = 0; i < input.length(); i++)
	{
		check = isdigit(input[i]);
		if (!check)
			return (0);
	}
	return (1);
}

std::string trimBlank(std::string str) {
    size_t start = str.find_first_not_of(" \t\n\r\v\f");
    size_t end = str.find_last_not_of(" \t\n\r\v\f");
    
    if (start == std::string::npos)
        return "";
    else
        return str.substr(start, end - start + 1);
}

std::string	getInput(std::string prompt) {
	std::string	input;

	while (1)
	{
		std::cout << std::endl << prompt << std::endl;
		std::getline(std::cin, input);
		input = trimBlank(input);
		if (prompt == "Enter phone number:") {
			if (!input.empty() && isDigit(input))
				return (input);
		}
		else {
			if (!input.empty())
				return (input);
		}
	}
}

void	searchContact(Contact *contact, int i) {
	std::string	input;

	if (i < 0)
		return ;
}

void	addContact(Contact *contact, int nb) {
	std::string	input;

	input = getInput("Enter first name:");
	//contact[nb].setFirstName(input);
	input = getInput("Enter last name:");
	//contact[nb].setLastName(input);
	input = getInput("Enter nickname:");
	//contact[nb].setNickName(input);
	input = getInput("Enter phone number:");
	//contact[nb].setPhoneNum(input);
	input = getInput("Enter darkest secret:");
	//contact[nb].setSecret(input);
}

int	main(void) {
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
				nb_contact = 0;
			addContact(pb.contact, nb_contact);
			nb_contact++;
			i++;
		}
		else if (input == "SEARCH")
		{
			if (i >= 0 && i <= 8)
				searchContact(pb.contact, i);
			else
				searchContact(pb.contact, 8);
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