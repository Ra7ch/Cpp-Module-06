# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: raitmous <raitmous@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/25 13:46:56 by raitmous          #+#    #+#              #
#    Updated: 2023/11/25 13:52:51 by raitmous         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= main.cpp ScalarConverter.cpp
OBJS	= ${SRCS:.cpp=.o}
CFLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -rf
NAME	= convert
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