# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jmiranda <jmiranda@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/29 00:21:39 by jmiranda          #+#    #+#              #
#    Updated: 2024/03/16 23:09:23 by jmiranda         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= PhoneBook

SRCS	= main.cpp Contact.cpp PhoneBook.cpp \

OBJS	= ${SRCS:.cpp=.o}

CC		= c++

CFLAGS	= -Wall -Wextra -Werror -std=c++98

all		: ${NAME}

${NAME}	: ${OBJS}
	${CC} ${CFLAGS} ${OBJS} -o ${NAME}

clean	:
	rm -f *.o

fclean	: clean
	rm -f ${NAME}
				
re		: fclean all

.PHONY	: all bonus clean fclean re
