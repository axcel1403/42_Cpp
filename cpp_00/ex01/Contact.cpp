/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmiranda <jmiranda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 01:17:05 by jmiranda          #+#    #+#             */
/*   Updated: 2024/03/17 01:21:30 by jmiranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	Contact::setFirstName(std::string str)
{
	_firstname = str;
}

std::string	Contact::getFirstName(void)
{
	return (_firstname);
}