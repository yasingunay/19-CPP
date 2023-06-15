# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ygunay <ygunay@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/15 14:05:10 by ygunay            #+#    #+#              #
#    Updated: 2023/06/15 17:04:44 by ygunay           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= megaphone

SRCS 		= megaphone.cpp

CC			= g++

CFLAGS		= -Wall -Wextra -Werror -std=c++98

OBJS 		= $(SRCS:.cpp=.o)

%.o: %.cpp
	${CC} ${CFLAGS} -c $< -o $@

all:		${NAME}

${NAME} : 	${OBJS}
				${CC} ${CFLAGS} ${OBJS} -o ${NAME} 

clean:
				rm -rf ${OBJS}

fclean:		clean
				rm -rf ${NAME}

re:				fclean all