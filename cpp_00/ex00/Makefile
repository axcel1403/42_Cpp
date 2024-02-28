# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jmiranda <jmiranda@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/28 00:11:52 by jmiranda          #+#    #+#              #
#    Updated: 2024/02/28 00:27:23 by jmiranda         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= megaphone

SRCS	= megaphone.cpp

OBJS	= ${SRCS:.cpp=.o}

CC		= g++

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