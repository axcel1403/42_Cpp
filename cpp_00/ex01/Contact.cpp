/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmiranda <jmiranda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 01:17:05 by jmiranda          #+#    #+#             */
/*   Updated: 2024/03/17 04:02:23 by jmiranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	Contact::setFirstName(std::string str) {
	_firstname = str;
}

void	Contact::setLastName(std::string str) {
	_lastname = str;
}

void	Contact::setNickname(std::string str) {
	_nickname = str;
}

void	Contact::setPhoneNum(std::string str) {
	_phonenum = str;
}
void	Contact::setSecret(std::string str) {
	_secret = str;
}
std::string	Contact::getFirstName(void) {
	return (_firstname);
}

std::string	Contact::getLastName(void) {
	return (_lastname);
}

std::string	Contact::getPhoneNum(void) {
	return (_phonenum);
}

std::string	Contact::getNickname(void) {
	return (_nickname);
}

std::string	Contact::getSecret(void) {
	return (_secret);
}