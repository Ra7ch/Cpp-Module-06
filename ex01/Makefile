# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: raitmous <raitmous@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/26 02:40:02 by raitmous          #+#    #+#              #
#    Updated: 2023/11/26 03:04:05 by raitmous         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= main.cpp Serializer.cpp
OBJS	= ${SRCS:.cpp=.o}
CFLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -rf
NAME	= Serializer
CC = c++

all	: ${NAME}

${NAME} : 
	${CC} ${CFLAGS} ${SRCS} -o ${NAME}

clean :
	${RM} ${OBJS}

fclean : clean
	${RM} ${NAME}

re : fclean all

a : all clean