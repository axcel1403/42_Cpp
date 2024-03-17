/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmiranda <jmiranda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 23:43:09 by jmiranda          #+#    #+#             */
/*   Updated: 2024/03/17 03:58:23 by jmiranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <iomanip>
#include <string>

class Contact {
	public:
		void		setFirstName(std::string str);
		void		setLastName(std::string str);
		void		setPhoneNum(std::string str);
		void		setNickname(std::string str);
		void		setSecret(std::string str);

		std::string	getFirstName(void);
		std::string	getLastName(void);
		std::string	getPhoneNum(void);
		std::string	getNickname(void);
		std::string	getSecret(void);
	private:
		std::string _firstname;
		std::string _lastname;
		std::string _nickname;
		std::string _phonenum;
		std::string _secret;
};

#endif